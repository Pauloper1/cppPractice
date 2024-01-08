/*
Coding Platform: Codeforces
Status: TLE
Comments: 
Problem Link: https://codeforces.com/problemset/problem/486/A 
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n, res = 0;
	cin >> n;
	for(; n >0 ; res+= n%2==0?n:-n,n--);

	cout << res;
	return 0;
}