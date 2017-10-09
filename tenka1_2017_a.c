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
const int maxn=6;
const ll mod=1000000007;
char s[maxn];


int main(){
	int out=0;
	cin>>s;
	for(int i=0;i<6;i++){
		if(s[i]=='1'){
			out++;
		}


	}

	cout<<out;
	return 0;



}