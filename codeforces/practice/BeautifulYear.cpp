/*
Coding Platform: Codeforces
Status: 
Comments: 
Problem Link: 
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;

	int num = n + 1;
	while(true){
		int numbers[10] = {0};
		int temp = num;	
		bool found = true;
		for(int i = 0; i < 4; i++){
			// cout << temp << endl;
			int rem = temp%10;
			// cout << rem << endl;
			if(numbers[rem] != 0){
				found = false;
				break;
			}
			numbers[rem] = 1;
			temp /= 10;
		}
		if(found){
			cout << num;
			break;
		}
		num++;
	}
}
