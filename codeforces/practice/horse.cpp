/*
Coding Platform: Codeforces
Status: 
Comments: 
Problem Link: https://codeforces.com/problemset/problem/228/A
*/

#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<long long int, int>> &v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << ": " << v[i].second;
	}
	cout << endl;
}

int main(){
	vector<pair<long long int, int>> numbers;
	int size = 4;
	int res = 0;
	for(int i = 0; i < size; i++){
		cout << i << endl;
		long long int num;
		cin >> num;
		// cout << num << endl;
		cout << numbers.size() << endl;
		bool found = true;
		for(int j = 0; j < numbers.size(); j++){
			// printVector(numbers);
			// cout << numbers[j] <<endl;
			if(numbers[i].first = num){
				found = false;
				numbers[i].second++;
			}
		}
		if(found){
			numbers[i] = {num, 1};
		}
		// cout << numbers[i].first;
	}


	// for(int i = 0; i < numbers.size(); numbers[i].second>1, res+= numbers[i].second - 1,i++)
	// cout << res;
}