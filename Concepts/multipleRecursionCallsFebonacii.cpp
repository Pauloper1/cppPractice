#include <bits/stdc++.h>
using namespace std;

int febo(int a){
	if(a == 1){
		return 1;
	} else if( a == 0) return 0;

	return (febo(a-1) + febo(a-2));
}

int main(){
	cout << febo(9);

}