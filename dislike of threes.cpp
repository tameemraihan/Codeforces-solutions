//Codeforces 1560-A::
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,res;
  cin>>t;
  int i = 0, j = 1;
  while(t--){
    cin>>n;
    while(i != n){
      if(j%3 != 0 && j % 10 != 3){
        res = j;
        j++;
      }
      else{
        j++;
        continue;
      }
      i++;
    }
    cout<<res<<endl;
  }
}
