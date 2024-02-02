//Codeforces 1703-A::
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string x;
        cin>>x;
        int a=0;
        if(x[0]=='Y' || x[0]=='y') a++;
        if(x[1]=='E' || x[1]=='e') a++;
        if(x[2]=='S' || x[2]=='s') a++;
        if(a==3){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
}

