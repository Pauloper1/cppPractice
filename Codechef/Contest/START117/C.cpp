#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a; int s;
		cin >> s >> a;
		for(int i = 0; i < s; i++){
			// cout << a[i] << endl;
			string b = "";
			for(int j = 0; j < s; j++){
				if(j!= i){
					b.push_back(a[j]);
				}
				// cout << "i: " << i << " j: "<< j << " b: " << b << endl;  
			}
			if(b < a){
				cout << b << endl;
				break;
			}
		}
	}
}