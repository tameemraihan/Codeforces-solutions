#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int a[3];
    a[0]=x1;
    a[1]=x2;
    a[2]=x3;
    int n=3;
    sort(a,a+n);
    int x=a[2]-a[0];
    cout<<x;
return 0;
}
