#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n,p;
    cin>>n;
    float arr[100];
    for(int i=0;i<n;i++){
        cin>>p;
        arr[i]=p;
    }
    double res=0.00;
    for(int i=0;i<n;i++){
        res=res+(arr[i]/100);
    }
    res=((res/n)*100);
    cout<<setprecision(14)<<res;
return 0;
}
