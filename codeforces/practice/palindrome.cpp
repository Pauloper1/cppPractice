#include<bits/stdc++.h>
using namespace std;


bool palaindrome(string num, int i){
	cout << num[i].c_str() << " " << i << endl;
	if(num[i] != num[num.length() - i -1] ){
		return false;
	} 
	return palaindrome(num, i + 1);
}


int main(){
	int num;
	cin >> num;

	// cout << to_string(num);

	cout << (palaindrome(to_string(num), 0)?"YES" : "NO") << endl;
	return 0;
}

