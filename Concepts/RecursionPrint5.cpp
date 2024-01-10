#include<bits/stdc++.h>
using namespace std;

void print5Times(int a, int limit){
	if(a == limit){
		return;
	}
	cout << a <<endl;
	print5Times(++a, limit);
}

int main(){
	int b = 7;
	print5Times(b, b+5);
}