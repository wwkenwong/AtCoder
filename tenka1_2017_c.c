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


int main(){

	ll n;
	cin>>n;
	for(ll a=1;a<=3500;a++){
		for(ll b=1;b<=3500;b++){
			ll rhs=a*n*b;
			ll lhs=(4*a*b)-(b*n)-(a*n);

			if(lhs>0)

				if(rhs%lhs==0){
					ll out=rhs/lhs;
					cout<<out<<" "<<a<<" "<<b;
					return 0;
				}

		}
	}



}