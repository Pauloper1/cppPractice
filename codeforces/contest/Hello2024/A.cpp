#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >> a >> b;
		cout << ((a+b)%2==0 ? "Bob": "Alice") << endl;
	}
	return 0;
}