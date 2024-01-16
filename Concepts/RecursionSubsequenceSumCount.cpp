#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
	for(int i = 0 ; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int subKsum(int index, int n, vector<int> &v, int arr[], int sum, int k, int count){
	// cout << "index: "<< index << endl;
	if(index >= n){
		if(sum == k){
		count += 1;
		printVec(v);
	}
	return count;
	}
	
	v.push_back(arr[index]);
	sum += arr[index];
	count = subKsum(index+1, n, v, arr, sum, k, count);
	v.pop_back();
	sum -= arr[index];
	count = subKsum(index+1, n, v, arr, sum, k, count);
	return count;
}

int main(){
	int arr[] = {2, 1, 1};
	int sum = 0;
	int k = 2;
	vector<int> v(0);
	int index = 0;
	int n = sizeof(arr)/sizeof(int);
	int count = 0;
	cout << "Count: " << subKsum(index, n, v, arr, sum, k, count);
	return 0;
}