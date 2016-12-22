#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
int main() {
  int i,j;
  long long a,b,x;
  cin>>a>>b>>x;
  if(x==1){
    cout<<(b-a+1)<<endl;
    return 0;
  }
  long long ans=b/x;
  if(a)
    ans-=(a-1)/x;
  else ans++;
  cout<<ans<<endl;
}
