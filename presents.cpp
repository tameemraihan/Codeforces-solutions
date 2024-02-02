#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int j=0,input;
    for(int i=0;i<n;i++){
        cin>>input;
        arr[i]=input;
    }

    for(j=1;j<=n;j++){
        for(int i=0;i<n;i++){
            if(arr[i]==j) cout<< (i+1) <<" ";
        }
    }
return 0;
}
