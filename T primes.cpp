#include<iostream>
#define ll long long
using namespace std;

int main(){
    ll x,c=0;
    cin>>x;

    while(x--){
        ll n,i;
        cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0) c++;
        if(c==2) break;
        else continue;
        }
    if(c==0 || c==2) cout<<"NO"<<endl;
    else if(c==1) cout<<"YES"<<endl;
    }

return 0;
}
