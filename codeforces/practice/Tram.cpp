/*
Coding Platform: Codeforces
Status: Accept
Comments: 
Problem Link: https://codeforces.com/problemset/problem/116/A 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int stops;
	cin >> stops;
	vector<vector<int>> v(stops, vector<int>(2));

	for(int i = 0; i < stops; i++){
		cin >> v[i][0] >> v[i][1];
	}

	int diff = 0;
	int tempDiff = 0;
	for(int i = 0 ; i < stops; i++){
		tempDiff = tempDiff - v[i][0] + v[i][1];

		diff = tempDiff > diff ? tempDiff : diff; 
	}

	cout << diff << endl;
}