#include <bits/stdc++.h>
using namespace std;
#define MIN_VALUE numeric_limits<long>::min()
#define MAX_VALUE numeric_limits<long>::max()
#define lL long long int;

int main(){
	int t;
	cin >> t;
	while(t--){
		int c, k;
		cin >> c;
		vector<int> v(0,0);
		vector<int> a1(0,0);
		vector<int> a2()

		lL ll = MAX_VALUE, ll rl = MIN_VALUE;
		while(c--){
			int a, x;
			cin >>a >> x;

			// cout <<  "a: " << a << endl;
			if(a==1){
				if(ll>x){
					ll=x;
				}
			}
			else if(a==2){
				if(rl<x){
					rl=x;
				}

			} else {
				v.push_back(x);
			}

			// cout << "ll: " << ll << "rl: " << rl << endl;
		}	
		k = rl-ll + 1;
		// cout << k << endl;
		if(k <= 0){
			cout << "0\n";
		} else {
			for(int i = 0; i < v.size(); i++){
				if(v[i] >= ll && v[i] <= rl){
					// cout << k <<endl;
					k -= 1;
				}
			}
			cout << "R: "<< k << endl;
		}
		

	}
	return 0;
}