#include<bits/stdc++.h>
using namespace std;


void printLinearly(int start){
	if(start == 0){
		return;
	}
	cout << start <<endl;
	printLinearly(--start);
}

int main(){
	int n = 10;
	printLinearly(n);
	return 0;
}