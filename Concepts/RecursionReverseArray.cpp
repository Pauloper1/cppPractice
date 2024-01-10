#include<bits/stdc++.h>
using namespace std;


void ReverserArray(int arr[], int i, int len){
	if(i == len/2){
		return;
	}
	swap(arr[i], arr[len - i - 1]);
	ReverserArray(arr, i + 1, len);
}


int main(){
	int arr[] = {2,4,5,6};
	ReverserArray(arr, 0 , 4);

	for(int i = 0; i < 4; i++){
		cout << arr[i] << " ";
	}

	return 0;
}


// void printArray(int []Array){

// }