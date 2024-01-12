/*
Coding Platform: Codeforces
Status: Accepted
Comments: Took too much time to solve and also didn't read the complete question, so I missed 'Y'
Problem Link: https://codeforces.com/problemset/problem/118/A
*/
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char char_){
	return (char_ == 'a' || char_ == 'e' || char_ == 'i' || char_ == 'o' || 
		   char_ == 'u' || char_ == 'y' || char_ == 'Y' || char_ == 'A' ||char_ == 'E' || char_ == 'I'  ||
		   char_ == 'O' || char_ == 'U');

}

int main(){
	string a;
	cin >> a;

	for(int i = 0; i < a.length(); i++){
		if(isVowel(a[i])) {
			a.erase(i,1);
			i--;
		}else if(!(isVowel(a[i]))){
		   
		   	a = a.substr(0,i)+"."+a.substr(i, a.length() - i);
			i++; 
			a[i] = a[i]<=90 && a[i]>65 ? a[i]+32: a[i];
		}

	}
		cout << a.c_str() << endl;
}


		