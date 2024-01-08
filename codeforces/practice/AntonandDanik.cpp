/*
Coding Platform: Codeforces
Status: Accept
Comments: Can use extra variable than just going with single var. Won't make much diff.
Problem Link: https://codeforces.com/problemset/problem/734/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	string a;
	cin >> size >> a;

	int count = 0;
	for(int i = 0; i < size; i++){
		if(a[i] == 'D'){
			count++;
		}
	}

	if(count > size/2){
			cout << "Danik" << endl;;
	} else if (count == size/2 && size%2 == 0){
		cout << "Friendship" << endl;
	} else {
		cout << "Anton" << endl;
	}
}