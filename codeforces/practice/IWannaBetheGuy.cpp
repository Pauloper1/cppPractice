/*
Coding Platform: Codeforces
Status: Accepted
Comments: 
Problem Link: https://codeforces.com/problemset/problem/469/A
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int s, x, y;
	cin >> s;
	cin >> x;

	//using set ds
	set<int> mySet;
	int a;

	//insert operation takes O(logN)
	for(int i = 0; i < x; scanf("%d", &a), mySet.insert(a),i++); 

	cin >> y;
	for(int i = 0; i < y; scanf("%d", &a), mySet.insert(a),i++);

	for(int ele: mySet){
		cout << ele << " ";
	}
	//Therefore, the time complexity of the program is O((x+y)logN)
	cout << endl;
	if(mySet.size() == s) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}
