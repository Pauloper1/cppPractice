#include <bits/stdc++.h>
using namespace std;

void printVector(std::vector<long long int> &v){
	for(long long int a: v){
		cout << a << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int c, k;
		cin >> c;
		vector<long long int> v(0,0);
		vector<long long int> a1(0,0);
		vector<long long int> a2(0,0);

		while(c--){
			int a; long long int x;
			cin >>a >> x;
			if(a==1){
				a1.push_back(x);
			}
			else if(a==2){
				a2.push_back(x);
			} else {
				v.push_back(x);
			}
		}	
		// printVector(a1);
		// printVector(a2);
		// printVector(v);
		long long int min = *(max_element(a1.begin(), a1.end()));
		long long int max = *(min_element(a2.begin(), a2.end()));
		// cout << min << max << endl;
		k = max - min + 1;
		// cout << k << endl;
		if(k <= 0){
			cout << "0\n";
		} else {
			for(int i = 0; i < v.size(); i++){
				if(v[i] >= min && v[i] <= max){
					// cout << k <<endl;
					k -= 1;
				}
			}
			cout << k << endl;
		}
		

	}
	return 0;
}