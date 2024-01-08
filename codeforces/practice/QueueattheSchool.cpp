/*
Coding Platform: Codeforces
Status: Failed
Comments: saw the answer. It's pretty easy tho.
Problem Link: https://codeforces.com/problemset/problem/266/B
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, t;
	string a;
	cin >> n >> t;
	cin >> a;
	for(int j = 0; i < t; i++){
		int i = 0;
		while(a[i] == 'B' && a[i+1] == 'G'){
			
			char temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			swaps--;
			i++;
		}
	}
	cout << a.c_str() <<endl;
	
}
