#include<iostream>
using namespace std;
int main(){
    long long n;
    int m,i,c=0;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++){
        cin>>m;
        arr[i]=m;N
    }
    for(i=0;i<n;i++){
        if(arr[i]!=arr[i+1]) c++;
    }
    cout<<c;
return 0;
}
