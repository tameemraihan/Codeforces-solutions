#include<iostream>
using namespace std;
int main(){
    long long int x;
    int k;
    cin>>x>>k;
    for(int i=0;i<k;i++){
        if(x%10==0) x=x/10;
        else x--;
    }
    cout<<x;
return 0;
}
