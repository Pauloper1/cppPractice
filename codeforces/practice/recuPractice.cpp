#include <bits/stdc++.h>
using namespace std;

void recP(int index, int n, int arr[], vector<int> &ds, int sum, int k){
	if(sum == k){
		cout << "res: ";
		for(auto a: ds){
			cout << a << ",";
		}
		cout << endl;
		return;
	}
	if(index >= n) return


	ds.push_back(arr[index]);
	sum += arr[index];
	index += 1;
	cout << sum << endl;
	return recP(index, n, arr, ds, sum, k );

	ds.pop_back();
	sum -= arr[index];
	return recP(index, n, arr, ds, sum, k);
}

int main(){
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(int);
	vector<int> ds;
	int sum = 0;
	int k = 3;
	recP(0, n, arr, ds, sum, k );
}