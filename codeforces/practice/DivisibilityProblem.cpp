/*
Coding Platform: Codeforces
Status: Accepted
Comments: 
Problem Link: https://codeforces.com/problemset/problem/1328/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b,r;
		cin >> a >> b;
		r = a%b == 0? 0: b - a%b ;
		cout << r << endl;
	}
}
