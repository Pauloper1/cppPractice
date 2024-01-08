#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	cin >> a;
	int noOfLucky = 0;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == '4' || a[i] == '7'){
			noOfLucky++;
		}
	}

	// cout << noOfLucky;
	if(noOfLucky == 0){
		cout << "NO";
	} else {
		while(noOfLucky > 0){
		if(noOfLucky%10 != 4 && noOfLucky%10 !=7){
			cout << "NO";
			exit(0);
		}
		noOfLucky /= 10;
	}
		cout << "YES";
	}
	
	

}