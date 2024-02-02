//codeforces A::
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;
    transform(x.begin(), x.end(), x.begin(),::tolower);
    transform(y.begin(), y.end(), y.begin(),::tolower);
    //cout<<x<<endl<<y;
    if(x==y)
    {
        cout << "0" <<endl;
    }
    else
    {
        for(int i=0; i<x.size(); i++)
        {
            if(x[i]<y[i])
            {
                cout << "-1";
                break;
            }
            if(x[i]>y[i])
            {
                cout << "1";
                break;
            }
        }
    }
    return 0;
}
