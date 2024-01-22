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
	cout << res;
}