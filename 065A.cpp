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
const int maxn=10000;

int main(){
	int x,a,b;
	cin>>x>>a>>b;
	
	if(a>=b){
		cout<<"delicious";
		return 0;
	}
	int lated=b-a;
	if(lated<=x){
		cout<<"safe";
		return 0;
	}	
	cout<<"dangerous";
	
}
