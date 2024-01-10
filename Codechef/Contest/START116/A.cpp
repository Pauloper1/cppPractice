#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n,x;
        string a;
        cin >> n >> x >> a;
        string res = "YES\n"; //Learning point: rather than using
        						// bool flag for output, res is predefined with "YES"
        int swipes = 0;
        for(int i = 0 ; i < n; i++){
        	if(a[i] == '0'){
        		swipes--;
        	} else {
        		swipes = x;
        	}
        	if(swipes < 0){
        		res = "NO\n";
        		break;
        	}
        }
        cout << res;
    }
}
