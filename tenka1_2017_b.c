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
const int maxn=10000000;
const ll mod=1000000007;
int a[maxn];
int b[maxn];


int main(){
	int N;
	cin>>N;
	int maxxx=0;
	memset(a,0,sizeof(a));
	for(int i=0;i<N;i++){
		cin>>a[i]>>b[i];
		if(a[i]>a[maxxx]){
			maxxx=i;
		}

	}

	int offset=b[maxxx]+a[maxxx];

	cout<<offset;	
	return 0;



}