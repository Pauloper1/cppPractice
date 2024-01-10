#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;
	while(t--){
		string res = "NO\n";
		int n = 6;
		char s[n];
		for(int i = 0; i < n; i++){
			cin >> s[i];
		}

		for(int i = 0; i < n; i++){
			
			int c = 0;
			while(i < n && s[i] == 'W') {
				c += 1;
				i += 1;
			}
			if(c > 2){
				res = "YES\n";
				break;
			}
		}
		cout << res;
	}
	return 0;
}	