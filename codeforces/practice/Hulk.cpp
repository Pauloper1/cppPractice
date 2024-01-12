/*
Coding Platform: Codeforces
Status: Accepted
Comments: 
Problem Link: https://codeforces.com/problemset/problem/705/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1 = "I hate ";
	string s2 = "I love ";
	string s3 = "that ";
	string res = "";
	int n;
	cin >> n;
	

	//One-liner
	for(int i = 1; i <= n; i%2 == 0 ? res+=s2:res+=s1, i<n?res+= s3:res=res, i++);
	
	//Expanded version
	// for(int i = 1; i <= n; i++){
	// 	if(i%2 == 0){
	// 		res += s2;
	// 	} else {
	// 		res += s1;
	// 	}
	// 	if(i < n){
	// 		res += s3;
	// 	}
		
	// }
	res += "it ";

	cout << res;
	return 0;
}
