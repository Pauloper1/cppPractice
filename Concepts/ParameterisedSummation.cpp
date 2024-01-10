#include <bits/stdc++.h>
using namespace std;


//The below function is using backtracking 
//to calculate the sum of N Numbers
int sumOfN(int a){
	cout << a << endl;
	if(a == 1){
		return 1;
	}
	return (a+sumOfN(a-1));
}


//The below function is using straight foward recursion 
//to calculate the sum of N Numbers
void sumOfN_2(int n, int sum){
	if(n < 1){
		cout << sum;
		return;
	}
	sumOfN_2(n-1, sum+n);
}

int main(){
	cout << sumOfN(3) << endl;
	sumOfN_2(3, 0);
	return 0;
}