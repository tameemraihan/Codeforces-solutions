#include<iostream>
using namespace std;
int main()
{
    int t,res=0,k=0;
    cin>>t;
    int a[t][2],a2[t];
    for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
          cin>>a[i][j];
        }
    }

    for(int i=0;i<t;i++){
        for(int j=0;j<2;j++){
            res=(a[i][j+1]-a[i+1][j])+a[i+1][j+1];//+ er porer tuku korar pore milechilo but 3 test e wrong!
            a2[k]=res;
            a[i+1][j+1]=res;//last update
            k++;
        }
    }
    int m=a2[0];
    for(int i=1;i<t;i++){
        if(a2[i]>m) m=a2[i];
    }
    cout<<m;
    return 0;
}
