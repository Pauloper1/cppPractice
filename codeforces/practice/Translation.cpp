/*
Coding Platform: Codeforces
Status: Accept
Comments:
Problem Link: https://codeforces.com/problemset/problem/41/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0 ; i < s1.length(); i++){
		if(s1[i] != s2[s1.length() -i - 1]){
			cout << "NO" << endl;
			exit(0);
		}
	}
	cout << "YES" << endl;
}