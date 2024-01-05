#include<bits/stdc++.h>
using namespace std;

int main(){
	int k, n, w;
	scanf("%d %d %d", &k, &n, &w);
	int totVal = k*w*(w+1)/2;
	int monToBor = totVal - n;
	if(monToBor <= 0){
		printf("%d", 0);
	} else {
		printf("%d", monToBor);
	}
	return 0;
}