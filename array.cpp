#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,neg=0;
    cin >> n;
    int arr1[n];
    vector<int>N,P,Z,S;// Store = S

    for(i=0; i<n; i++)
    {
        cin >> arr1[i];
        if(arr1[i]<0){
        neg++;
        S.push_back(arr1[i]);
        }

    }
    int x = (neg / 2)+1;
    int y = S.size();

    if(x%2==0)
    {
        for(i=0; i<x; i++)
        {
            N.push_back(S[i]);
        }
        for(i=0; i<y; i++)
        {
            if(P[i]!=S[i])
            {
                N.push_back(S[i]);
            }
        }
    }
    else
    {
        for(i=0; i<x; i++)
        {
            N.push_back(S[i]);
        }
        for(i=0; i<y; i++)
        {
            if(N[i]!=S[i])
            {
                P.push_back(S[i]);
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr1[i]>0){
            P.push_back(arr1[i]);
        }
    }

    for(i=0; i<n; i++)
    {
        if(arr1[i]=P[i] )
        {
            continue;
        }
        else if(arr1[i]=N[i])
                {
                 continue;
            }
        else
            Z.push_back(arr1[i]);
    }



    cout << N.size() << " ";
    for(i=0; i<N.size(); i++)
    {
        cout << N[i] << " ";
    }
    cout << "\n";

    cout << P.size() << " ";
    for(i=0; i<P.size(); i++)
    {
        cout << P[i] << " ";
    }

    cout << "\n";
    cout << Z.size() << " ";
    for(i=0; i<Z.size(); i++)
    {
        cout << Z[i] << " ";
    }
    return 0;
}
