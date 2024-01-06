#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int p = 0;
		int size;
		string s;
		cin >> size >> s;
		for(int i = 0; i < size; i++){
			if(s[i] == '-') p-=1;
			else p+=1;
		}

		cout << abs(p) << endl;
	}
	return 0;
}