#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s;
		cin >> s;
		string a1, a2;
		cin >> a1 >> a2;
		int count1 = 0;
		int count2 = 0;
		for(int i = 0; i < s; i++){
			if(a1[i] == '0' && a2[i] == '1') count2++;
			if(a1[i] == '1' && a2[i] == '0') count1++;
		}
		cout << (count1>=count2?count1:count2) << endl;
	}
}