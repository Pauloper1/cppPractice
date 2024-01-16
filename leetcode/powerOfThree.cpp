#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n, int power) {
	// cout << "n : " << n << endl;
	if(n == 1){
		return true;
	}
	if(n%power == 0){
		return isPowerOfThree(n/power, power);
	} else return false;
}


bool isPowerOfThree(int n){
	double a = log(n);
	// cout << a << endl;
	double b = log(3);
	// cout << b <<endl;
	double res = a/b;
	// cout << res << endl;
	// printf("%f\n", res);
	// cout << floor(res);
	double epsilon = 1e-9;
	if(abs(res - floor(res)) < epsilon) return true;
	else return false;
}
int main(){

	int n = 20;
	int pow = 4;
	// for (int i = 1; i <= n; ++i)
	// {
	// 	cout << isPowerOfThree(i, pow) << endl;
	// } cout << endl;

	cout << isPowerOfThree(243);
	return 0;
}