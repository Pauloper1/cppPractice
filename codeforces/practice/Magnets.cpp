/*
Coding Platform: Codeforces
Status: Accept
Comments: 
Improvised code (Found Online): 
#import<cstdio>
int x,y,n,s;main(){for(scanf("%d",&n);n--;s+=x!=y,x=y)scanf("%d",&y);printf("%d",s);}
Problem Link: 
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
	int m;
	cin >> m;
	int grps = 0;
	int magArr[m];
	for(int i = 0;i < m; i++){
		cin >> magArr[i];
	}

	for(int i = 1; i < m; i++){
		if(magArr[i] != magArr[i - 1]){
			grps++;
		}
	}
	cout << grps+1;
	return 0;
}