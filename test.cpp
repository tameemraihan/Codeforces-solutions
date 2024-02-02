#include<iostream>
using namespace std;
int main(){
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    int c=k;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){

         if(arr[i]!=0)
        {
            //k=0;
            if((arr[k-1]==arr[k])){
            k++;
        }
        }
        else if(arr[0]==0) k=0;
        else if(arr[i]==0) k=i;
        //else k=i;
    }
    c=k;
    cout<<c;
return 0;
}
