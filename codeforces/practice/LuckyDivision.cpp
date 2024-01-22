#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string res = "NO";
	for(int i = 1; i < n; i++){
		if(i%4==0 &&(n-i)%7==0){
			cout << i << endl;
			res = "YES";
			break;
		}
	}
	else {
		while(n>0){
			int d = n%10;
			n = n/10;
			// cout << d << endl;
			if(!(d == 4 or d != 7)){
				res = "YES";
			}
		}
		cout 
	}
}