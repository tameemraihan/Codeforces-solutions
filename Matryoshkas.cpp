#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t,n,a;
    cin>>t;
    int c1=1,c2=0;
    while(t--){
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>a;
            arr[i]=a;
        }
        //ll x=arr.size();
        sort(arr, arr+n);
        for(ll i=0;i<n;i++){
            //if(arr[i]==arr[i+1]) c1++;
            if(arr[i]==(arr[i+1]+1)) continue;
            else if(arr[i]!=(arr[i+1]+1) || arr[i]==arr[i+1]) c1++;
        }
        cout<<c1<<endl;
    }
return 0;
}
