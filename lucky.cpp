#include<iostream>
#include<string>
using namespace std;
int main(){
    string x;
    long long t;
    cin>>t;
    int c=0,c1=0;
    while(t--){
        cin>>x;
        c=x[0]+x[1]+x[2];
        c1=x[3]+x[4]+x[5];
        if(c==c1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}
