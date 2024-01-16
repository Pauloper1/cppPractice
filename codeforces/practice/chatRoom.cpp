/*
/*
Coding Platform: Codeforces
Status: Accepted
Comments: 
Problem Link: https://codeforces.com/problemset/problem/69/A
Rating: 1000
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int xt = 0, yt = 0, zt = 0;
	for(int i = 0; i < t; i++){
		int x, y, z;
		cin >> x >> y >> z;
		xt+=x;yt+=y;zt+=z;
	}
	if(xt == 0 && yt == 0 && zt == 0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}