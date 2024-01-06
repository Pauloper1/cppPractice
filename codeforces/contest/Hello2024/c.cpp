#include<bits/stdc++.h>
using namespace std;


void incArr(int arr[]){
	for(int i = 0; i < 2; i++){
		arr[i] += 2;
	}
}
int main(){
	int arr[2] = {1, 2};
	incArr(arr);
	for(int i = 0;i < 2; i++){
		cout << " "<< arr[i];
	}
	return 0;
}