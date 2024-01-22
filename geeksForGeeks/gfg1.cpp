#include<bits/stdc++.h>
using namespace std;

// 10
// 10 -2 3 9 7 6 2 -10 9 10
void printVec(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main(){
	int n;
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	vector<int> v1;
	for(int i = 0; i < n/2; i++){
		v1.push_back(v[i] + v[v.size() - i - 1]);
	}
	int max = *max_element(v1.begin(), v1.end());
	cout << max;
}