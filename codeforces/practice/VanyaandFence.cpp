/*
Coding Platform: Codeforces
Status: 
Comments: 
Problem Link: 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, h;
	cin >> n >> h;
	int w = 0;
	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		w = num <= h ? w + 1: w + 2;
	}
	cout << w << endl;
}