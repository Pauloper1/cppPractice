#include<bits/stdc++.h>
using namespace std;

int main(){
	bool h = false;
	bool e = false;
	bool l1 = false;
	bool l2 = false;
	bool o = false;

	string a; 
	string res = "NO";
	cin >> a;
	for(int i = 0; i < a.length(); i++){
		if(a[i] == 'h'){
			h = true;
		}  else if (h && a[i] == 'e'){
			e = true;
		} else if (h && e && !l1 &&a[i] == 'l'){
			l1 = true;
		} else if (h && e && l1 && a[i] == 'l'){
			l2 = true;
		} else if(h && e && l1 && l2 && a[i] == 'o'){
			res = "YES";
			break;
		} 
		// cout << endl;
		// cout << i << endl;
		// cout << "h " << h << endl;
		// cout << "e " << e << endl;
		// cout << "l1 " << l1 << endl;
		// cout << "l2 " << l2 << endl;
		// cout << "o " << o << endl;
	}
	cout << res;

}