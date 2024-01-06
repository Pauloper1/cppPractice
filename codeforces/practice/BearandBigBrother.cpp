#include<bits/stdc++.h>
using namespace std;

int main(){

	int a, b;
	scanf("%d %d", &a, &b);
	int a3 = 3;
	int b2 = 2;
	int count = 1;
	while(true){
		a *= a3;
		b *= b2;
		if(a > b){
			break;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}