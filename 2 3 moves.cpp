//Codeforces 1716-A::
#include<iostream>
using namespace std;
int main(){
    long long int t,n;
    cin>>t;
    for(long long int i=0;i<t;i++){
        cin>>n;
        if(n%3==0) cout<<n/3<<endl;
        else if(n==1) cout<<2<<endl;
        else cout<<n/3+1<<endl;
    }

return 0;
}
