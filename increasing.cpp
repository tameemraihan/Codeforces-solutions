#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t,s,n;
    cin>>t;
    vector <int> arr,arr2;
    int c=0;
    for(int i=0; i<t; i++)
    {
        cin>>s;
        for(int j=0; j<s; j++)
        {
            cin>>n;
            arr.push_back(n);
        }
        sort(arr.begin(),arr.end());
        for(long long k=0; k<s; k++)
        {
            if(arr[k]!=arr[k+1])
            {
                c=0;
            }
            else
            {
                c++;
                break;
            }
        }

        if(c!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        arr.clear();
    }
    return 0;
}
