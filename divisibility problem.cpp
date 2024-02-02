#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll i,a,b,t;
    int c=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0) cout<<"0"<<endl;
        else {
            cout<<(b-(a%b))<<endl;
        }
    }
    return 0;

}
