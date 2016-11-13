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
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c||a+c==b||b+c==a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
