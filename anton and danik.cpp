#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int c1=0,c2=0;
    int n;
    cin>>n;
    string x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x[i]=='A') c1++;
        else c2++;
    }
    if(c1>c2) cout<<"Anton"<<endl;
    else if(c1<c2) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

return 0;
}
