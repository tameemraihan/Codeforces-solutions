#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string x,y;
    y="hello";
    cin>>x;
    int c=0,j=0;
    for(int i=0;i<x.size();i++){
        if(x[i]==y[j]){
            c++;
            j++;
        }
    }
    if(c==5) cout<<"YES";
    else cout<<"NO";
return 0;
}
