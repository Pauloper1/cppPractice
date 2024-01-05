/*
Coding Platform: Codeforces
Problem link: https://codeforces.com/problemset/problem/236/A
Rating: 800


*/

#include<bits/stdc++.h>
using namespace std;


int main(){
	map<int, int> myMap;

	for(int i = 97; i <=122; i++){
		myMap[i] = 0;
	}

	string name;
	cin >> name;
	int sum = 0;

	for(int i = 0; i < name.length(); i++){
		if(myMap[name[i]] == 0){
			myMap[name[i]] = 1;
			sum += 1;
		} else {

		}
	}

	if(sum%2 != 0){
		printf("IGNORE HIM!");
	} else {
		printf("CHAT WITH HER!");
	}
	

	return 0;
}