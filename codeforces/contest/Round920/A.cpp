#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a1, a2 ,b1, b2, c1 ,c2 ,d1, d2;
		cin >> a1 >> a2;
		cin >> b1 >> b2;
		cin >> c1 >> c2;
		cin >> d1 >> d2;
		int s1,s2;
		if(a1 == b1){
			s1 = abs(a2 - b2); //y
			s2 = abs(a1 - c1); //x
		} else if (a1 == c1) {

			s1 = abs(a1 - b1); //x
			cout << "s1: "<< s1 <<endl;
			s2 = abs(a2 - c2);
			cout << "s2: "<< s2 <<endl;
		} else {
			s1 = abs(a2 - d2); //y
			s2 = abs(a1 - b1); //x
		}
		cout << s1*s2 << endl;

	}
}