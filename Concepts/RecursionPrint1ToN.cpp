#include<bits/stdc++.h>
using namespace std;


void printLinearly(int start, int last){
	if(start == last+1){
		return;
	}
	cout << start <<endl;
	printLinearly(++start, last);
}

int main(){
	int n = 10;
	printLinearly(1, 10);
	return 0;
}