/*

Coding Platform: Codeforces
Status: Accepted
Comments: 
Problem Link: https://codeforces.com/problemset/problem/58/A
Rating: 1000
*/


#include <bits/stdc++.h>
using namespace std;

int h = 0, e = 0, l = 0, o = 0;
void reset(){
	h = 0, e = 0, l = 0, o = 0;
}

void printVal(){
	cout << "h: " << h << endl;
	cout << "e: " << e << endl;
	cout << "l: " << l << endl;
	cout << "o: " << o << endl;
}
int main(){
	string a;
	cin >> a;

	for(int i = 0; i < a.length(); i++){
		if(a[i] == 'h'){
			// cout << i << endl << endl;
			// printVal();
			while(a[i] == 'h' && i < a.length()){
				i++;
				h++;
			}
			if(a[i] == 'e'){
				// printVal();
				// cout << i << endl << endl;
				while(a[i] == 'e' && i < a.length()){
					i++;
					e++;
				}
				if(a[i] == 'l'){
					// printVal();
					// cout << i << endl << endl;
					while(a[i] == 'l' && i < a.length()){
						i++;
						l++;
					} 
					
				}
				if(a[i] == 'o'){
						// printVal();
						// cout << i << endl << endl;
					while(a[i] == 'o' && i < a.length()){
						i++;
						o++;
					}
				}
			}
		} else reset();
	}

	if(h>0&&e>0&&l>1&&o>0){
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}