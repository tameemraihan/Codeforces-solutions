#include<iostream>
using namespace std;
int main(){
    int t,i=0,j;
    cin>>t;
    while(t--){
        int n,s,r,res,x,y;
        cin>>n>>s>>r;
        x=s;
        y=n;
        int a[n];
        res=s-r;
        a[0]=res;
        for(i=1;i<n;i++){
            y--;
            x=x-res;
            res=x/y;

            a[i]=res;
        }
        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;

    }
return 0;
}
