#include<bits/stdc++.h>
using namespace std;

void Backtrack(int a, int limit){
	if(a > limit){
		return;
	}
	Backtrack(a+1, limit);
	cout << a << " ";
}
 

int main(){

	Backtrack(1, 66);
	return 0;
}