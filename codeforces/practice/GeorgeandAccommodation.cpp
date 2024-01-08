/*
Coding Platform: Codeforces
Status: Accept
Comments: 
Problem Link: https://codeforces.com/problemset/problem/467/A
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int s;
	cin >> s;
	int res = 0;
	for(int i = 0; i < s; i++){
		int a, b;
		cin >> a >> b;
		if(a <= b-2) res++;
	}
	cout << res;
	return 0;
}