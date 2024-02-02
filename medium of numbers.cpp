//Codeforces 1760-A::
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    int arr[3];
    int arr2[t];
    int j=0,k=0;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b>>c;
        arr[j]=a;
        arr[j+1]=b;
        arr[j+2]=c;
        sort(arr,arr+3);
        arr2[k]=arr[1];
        k++;
    }
    for(int i=0; i<t; i++) cout<<arr2[i]<<endl;

    return 0;
}
