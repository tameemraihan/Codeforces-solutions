#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],c=0;
    for(int i=0;i<n;i++){
            cin>>a[i];
        if(a[i]==1){
            c++;
        }
    }
    if(c!=0) cout<<"HARD";
    else cout<<"EASY";
return 0;
}
