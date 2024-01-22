#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a; int s;
		cin >> s >> a;
		for(int i = 0; i < s; i++){
			string b = a; b.erase(i,1);
			// cout << b << endl;
			if(b < a){
				cout << b << endl;
				break;
			}
		}
	}
}