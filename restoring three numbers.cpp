#include<bits/stdc++.h>
#include<algorithm>
#define ll long long
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    ll m = max({a,b,c,d},comp);
    if(m==a)
    {
        cout<<(m-b)<<" ";
        cout<<(m-c)<<" ";
        cout<<(m-d)<<" ";
    }
    else if(m==b)
    {
        cout<<(m-a)<<" ";
        cout<<(m-c)<<" ";
        cout<<(m-d)<<" ";
    }
    else if(m==c)
    {
        cout<<(m-b)<<" ";
        cout<<(m-a)<<" ";
        cout<<(m-d)<<" ";
    }
    else if(m==d)
    {
        cout<<(m-a)<<" ";
        cout<<(m-b)<<" ";
        cout<<(m-c)<<" ";
    }
}
