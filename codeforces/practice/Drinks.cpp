/*
Coding Platform: Codeforces
Status: 
Comments: 
Problem Link: https://codeforces.com/problemset/problem/200/B
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int s;
	cin >> s;
	double sum = 0;
	for(int i = 0; i < s; i++){
		double a;
		cin >> a;
		sum += a / 100;
	}
	cout << fixed << setprecision(12) << (sum/s)*100;
	return 0;
}