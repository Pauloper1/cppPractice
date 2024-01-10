#include<bits/stdc++.h>
using namespace std;


void addFun(int a){
	if(a > 0){
		cout << a <<endl;
		addFun(--a);
	}
}

int main(){

	addFun(5);
	return 0;
}

