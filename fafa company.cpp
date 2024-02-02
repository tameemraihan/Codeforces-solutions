#include<iostream>
using namespace std;
int main(){
    int n,i=2,x=0;
    int c=1;
    cin>>n;
    while(i!=n){
        x=n-i;
        if(x%i==0){
            c++;
        }
        i++;
    }
    cout<<c;
return 0;
}
