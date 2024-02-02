#include<iostream>
using namespace std;
int main(){
    long long k,n;
    cin>>k>>n;
    if(n==k) cout<<(k-1);
    else if(n<k/2) cout<<((n*2)-1);
    else if(n==k/2) cout<<(k-1);
    else if(n>k/2) cout<<((n-(k/2))*2);

return 0;
}

