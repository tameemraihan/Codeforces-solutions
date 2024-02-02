#include<iostream>
using namespace std;
int main(){
    int n,k,i;
    cin>>n>>k;
    int fin=k;
    int arr[n];
    int c=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0) c++;
        //else fin--;
    }
    if(c<k) fin=c;
    i=k-1;
    for(int j=k;j<c;j++){
        if(arr[i]==arr[j]) fin++;
    }
    cout<<fin;

return 0;
}
