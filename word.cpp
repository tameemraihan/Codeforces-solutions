//Codeforces 59-A::
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    string x;
    cin>>x;
    int u=0,l=0;
    for(int i=0;i<x.size();i++){
        if(isupper(x[i])) u++;
        else l++;
    }
    //cout<<u<<l;
    if(u>l)transform(x.begin(),x.end(),x.begin(), ::toupper);
    else transform(x.begin(),x.end(),x.begin(), ::tolower);
    cout<<x;
return 0;
}
