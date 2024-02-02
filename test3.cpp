
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,n,neg=0,input;
    cin >> n;
    //int arr1[n]; - katlam
    vector<int>N,P,Z,S;// Store = S
    //arrNeg[100],arrSet1[100],arrSet2[100];

    for(i=0; i<n; i++)
    {
        cin >> input;//arr1[i] - katlam
        if(input<0) // arr1[i] - katlam
        {
            neg++;
            //S.push_back(arr1[i]);
            N.push_back(input); // arr1[i] - katlam
        }
        else if(input>0) // arr1[i] - katlam
        {
            P.push_back(input); // arr1[i] - katlam
        }
        else if(input==0) // arr1[i] - katlam
        {
            Z.push_back(input); // arr1[i] - katlam
        }

    }
    int x = (neg / 2)+1;
    int y = S.size();

    if(x%2==0)
    {
        for(i=0; i<x; i++)
        {
            P.push_back(S[i]);
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
    for(i=0; i<n; i++)
    {
        if(arr1[i]>0)
        {
            P.push_back(arr1[i]);
        }
    }

    for(i=0; i<n; i++)
    {
        if(arr1[i]!=P[i] )
        {
            continue;
        }
        else if(arr1[i]!=N[i])
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

    //cout << neg;
    //int sizeNeg = arrNeg.size();
    //cout << neg;
    return 0;
}
