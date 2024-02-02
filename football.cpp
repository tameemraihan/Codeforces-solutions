//Codeforces 96-A::
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string x;
    cin>>x;
    int c=1;
    for(int i=0;i<x.size();i++){
        if(x[i]==x[i+1]){
           c++;
           if(c>6)
            break;
        }
        else c=1;
    }
    if(c>6) cout<<"YES";
    else cout<<"NO";
return 0;
}
