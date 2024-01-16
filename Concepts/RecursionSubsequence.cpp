#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
	// cout << v.size();
	for(int i = 0 ; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}


void printArr(int arr[], int n){
	for(int i = 0 ; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sub(int index, vector<int> &v, int n, int arr[]){
	// cout << "index: " << index << endl;
	// printArr(arr, n);
	if(index >= n){
		printVec(v);
		return;
	}
	v.push_back(arr[index]);
	sub(index+1, v, n, arr);
	v.pop_back();
	sub(index+1, v, n, arr);
}

int main(){

	int arr[] = {3, 1, 2};
	vector<int> v(0,0);
	sub(0, v, 3, arr);
	return 0;
}