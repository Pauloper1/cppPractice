/*
Coding Platform: Codeforces
Status: Accepted
Comments: 
Problem Link: https://codeforces.com/problemset/problem/61/A
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b, c;
	c.resize(a.length());
	cin >> a >> b;
	for(int i = 0; i < a.length(); a[i] != b[i]?a[i]='1':a[i]='0',i++);
	cout << a;
	return 0;
}