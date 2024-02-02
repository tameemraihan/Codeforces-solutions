//266-A stones on the table Codeforces::
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    int c=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int j=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[j]) c++;
        j++;
    }
    cout<<c;
    return 0;
}
