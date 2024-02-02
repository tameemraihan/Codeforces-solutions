#include<iostream>
using namespace std;
int main(){
    int k,w;
    long long int n,res=0;
    cin>>k>>w>>n;
    for(int i=0;i<n;i++){
        res=res+(k*(i+1));
    }
    res=res-w;
    if(res>0)
    cout<<res;
    else cout<<"0";
return 0;
}
