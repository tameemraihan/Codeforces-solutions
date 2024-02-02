#include<iostream>
using namespace std;
int main(){
    int c=0,n,p,v,t;
    cin>>n;
    while(n!=0){
        cin>>p>>v>>t;
    if((p+v+t)>=2){
        c++;
    }
        n--;
    }
    cout<<c;

return 0;
}
