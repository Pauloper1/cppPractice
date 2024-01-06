#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,k;
	cin >> n >> k;
	int newN = n;
	for(int i  = 0 ; i < k; i++){
		int lastD = n%10;
		if(lastD == 0){
			n = n/10;
		} else {
			n -= 1;
		}
	}
	cout <<n;
}