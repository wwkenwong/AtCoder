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
const ll mod=1000000007;
int n,m;

ll factorial(int n){
	ll ans=1;
	for(int i=1;i<n+1;i++){
		ans*=i;
		ans=ans%mod;
	}
	
	ans=ans%mod;
	return ans;
	
	
	
}

int main(){
	cin>>n>>m;
	if(n==m){
		
		ll ans_n=factorial(n);
		ll ans_m=factorial(m);
		
		ll out=((ans_n*ans_m))%mod;
		out=(2*out)%mod;
		cout<<out;
		return 0;
		
		
	}
	if(abs(n-m)==1){
		ll ans_n=factorial(n);
		ll ans_m=factorial(m);
		
		ll out=((ans_n*ans_m))%mod;
		cout<<out;
		return 0;
	}
	cout<<"0";
	return 0;
}
