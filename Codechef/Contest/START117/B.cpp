#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    long long int h, x, y1, y2, k;
	    cin >> h >> x >> y1 >> y2 >> k;
	    long long int lazer;
	    // = y1*k >= h ? h/y1 : h/y1 + (h%y1)/y2; 

	    if(y1*k >=h){
	    	lazer = h/y1;
	    } else {
	    	lazer = h/y1 + (h%y1)/y2;
	    }
	    cout << "Lazer: " << lazer << endl;
	    cout << "Gun: " << h/x << endl;
	    int res = min(h/x, lazer); 
		cout << res << endl;
	}
}
