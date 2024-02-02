#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    string x;
    cin>>x;
    for(int i=0;i<n;i++) x[i]=tolower(x[i]);

    sort(x.begin(),x.end());

    for(int i=0;i<n;i++){
        if(x[i]!=x[i+1]) c++;
    }
    if(c==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;
}
