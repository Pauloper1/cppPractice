#include<bits/stdc++.h>
using namespace std;

int sumVec(vector<int> &v, int limit){
	int sum =0;
	for(int i = 0; i < limit; i++){
		sum+=v[i];
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,x;
		vector<int> ds;
		cin >> n >> k >> x;
		for(int i = 0; i < n; i++){
			int a;
			cin >> a;
			ds.push_back(a);
		}
		sort(ds.begin(), ds.end());
		int sum = sumVec(v, v.size());
		cout << "sum: " << sum << endl;
		int new_sum = sumVec(v, v.size - k);
		if(v.size - k != 0){
			
		}
		else {
			cout << "0\n";
		}

	}
}