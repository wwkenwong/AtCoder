#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <sstream>
#include <deque>
#define ll long long
using namespace std;
const int maxn=100000;
int a[maxn];
int main(){
	
	memset(a,0,sizeof(a));
	
	int N;
	cin>>N;
	for(int i=1;i<N+1;i++){
		cin>>a[i];
		
	}
	int counter=0;
	int cur=1;
	bool flag=1;
	while(flag){
		cur=a[cur];
		counter++;
		if(cur==2){
			flag=0;
			cout<<counter;
			return 0;
		}
		if(counter>N){
			flag=0;
			cout<<"-1";
			return 0;
		}
		
	}
	
}
