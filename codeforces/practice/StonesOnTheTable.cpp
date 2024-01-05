#include<bits/stdc++.h>
using namespace std;

int main(){
	int size;
	string s;

	scanf("%d", &size);


	char buffer[1001];
    scanf("%1000s", buffer);
    s = buffer;

	int count = 0;
	for(int i = 0; i < size - 1; i++){
		if(s[i] == s[i+1]){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}