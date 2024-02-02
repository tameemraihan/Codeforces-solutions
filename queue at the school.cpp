#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string x;
    cin>>x;
    while(t--){
        for(int i=0;i<x.size()-1;i++){
            if(x[i]=='B'&&x[i+1]=='G'){
                x[i]='G';
                x[i+1]='B';
                i++;
            }
        }
    }
    cout<<x;
return 0;
}
