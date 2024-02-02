#include<iostream>
using namespace std;
int main(){
    int n,a,b,r=0;
    int c=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        c=c-a;
        c=c+b;
        if(c>r) r=c;
    }
    cout<<r;
return 0;
}
