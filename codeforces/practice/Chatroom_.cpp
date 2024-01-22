/*

Coding Platform: Codeforces
Status: 
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
			cout << i << endl << endl;
			printVal();
			while(a[i] == 'h' && i < a.length()){
				i++;
				h++;
			}
			while(a[i] != 'e' && i < a.length()) i++;
			if(a[i] == 'e'){
				cout << i << endl << endl;
				printVal();
				cout << i << endl;
				while(a[i] == 'e' && i < a.length()){
					i++;
					e++;
				}
				cout << endl << i;
				while(a[i] != 'l' && i < a.length()) i++;
				if(a[i] == 'l'){
					cout << i << endl << endl;
					printVal();
					while(a[i] == 'l' && i < a.length()){
						i++;
						l++;
					} 
					while(a[i] != 'l' && i < a.length()) i++;
					if(a[i] == 'l'){
					cout << i << endl << endl;
					printVal();
						while(a[i] == 'l' && i < a.length()){
							i++;
							l++;
						} 
						while(a[i] != 'o' && i < a.length()) i++;
						if(a[i] == 'o'){
						cout << i << endl << endl;
						printVal();
							while(a[i] == 'o' && i < a.length()){
								i++;
								o++;
							}
						} 
					}
					
				}
			}
		} 
	}

	if(h>0&&e>0&&l>1&&o>0){
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}