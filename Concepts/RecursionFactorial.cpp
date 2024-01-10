#include <bits/stdc++.h>
using namespace std;

int RecursiveFactorial(int i){
	if(i < 2){
		return 1;
	}
	return(i * RecursiveFactorial(i-1));
}

int main(){

	cout << RecursiveFactorial(2);
	return 0;
}

// Time Complexity => O(n)
// Space Complexity => O(n)