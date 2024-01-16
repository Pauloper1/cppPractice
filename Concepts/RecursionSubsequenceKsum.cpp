#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
	// cout << v.size();
	for(int i = 0 ; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

bool subKsum(int index, int n, vector<int> &v, int arr[], int sum, int k){
	cout << "index: "<< index << endl;
	if(index >= n){
		if(sum == k){
		printVec(v);
		return true;
	}
	return false;
	}
	
	v.push_back(arr[index]);
	sum += arr[index];
	if(!subKsum(index+1, n, v, arr, sum, k)){
		v.pop_back();
		sum -= arr[index];
		return subKsum(index+1, n, v, arr, sum, k);
	}
	return true;

}

int main(){
	int arr[] = {2, 1, 1};
	int sum = 0;
	int k = 2;
	vector<int> v(0);
	int index = 0;
	int n = sizeof(arr)/sizeof(int);
	subKsum(index, n, v, arr, sum, k);
	return 0;
}