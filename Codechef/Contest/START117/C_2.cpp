#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a; int s;
		cin >> s >> a;
		for(int i = 0; i < s; i++){
			string b = a.substr(0,i) + a.substr(i+1,a.length()-1);
			if(b < a){
				cout << b << endl;
				break;
			}
		}
	}
}