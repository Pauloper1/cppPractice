#include<bits/stdc++.h>
using namespace std;

int main(){
	int cor;
	scanf("%d", &cor);

	int steps = 0;
	// int rem = cor%5;
	int q = cor/5;
	steps += q + (cor%5 == 0?0:1);
	printf("%i", steps);
	return 0;
}