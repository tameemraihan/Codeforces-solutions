//Codeforces 263-A::
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[5][5];
    int i,j,x,y;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                x=i+1;
                y=j+1;
                break;
            }
        }
    }
    if(x<=3 && y<=3)
    {
        x=(3-x)+(3-y);
        x=abs(x);
        cout<<x;
    }
    else if(x<3 && y>3)
    {
        x=(3-x)+(y-3);
        x=abs(x);
        cout<<x;
    }
    else if(x>3 && y>3)
    {
        x=(x-3)+(y-3);
        x=abs(x);
        cout<<x;
    }
    else
    {
        x=(x-3)+(3-y);
        x=abs(x);
        cout<<x;
    }

    return 0;
}
