#include<iostream>
#include<string>
using namespace std;
int main(){
    string x,y;
    cin>>x>>y;
    int n=x.size();
    for(int i=0;i<n;i++){
        if(x[i]==y[i]) cout<<"0";
        else cout<<"1";
    }
return 0;
}

