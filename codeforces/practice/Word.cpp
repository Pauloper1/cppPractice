#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;

	int caps = 0;
	int notCaps = 0;
	for(int i = 0; i < s.length(); i++){
		if (s[i]<=90 && s[i] >= 65){
			caps++;
		} else {
			notCaps++;
		}
	}

	// printf("%i", caps);
	if(notCaps >= caps){
		for(int i = 0; i < s.length(); i++){
			putchar(tolower(s[i]));
		}
	} else {
		for(int i = 0; i < s.length(); i++){
			putchar(toupper(s[i]));
		}
	}
	return 0;
}