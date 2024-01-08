/*
Coding Platform: Codeforces
Status: Accept
Comments: Avoid silly mistakes. SillyMistake: forgot to type cin>>s;
Problem Link: https://codeforces.com/problemset/problem/1030/A
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
	int s;
	cin >> s;
	string result = "EASY";
	for(int i = 0; i < s; i++){
		int num;
		cin >> num;
		if(num == 1){
			result = "HARD";
		}
	}
	cout << result;

	return 0;
}