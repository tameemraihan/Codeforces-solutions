//Codeforces 791-A::
#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cin>>a>>b;
    if(a==b) cout<<"1";
    else{
        for(int i=0;i<10;i++){

        while(a<=b){
            a=a*3;
            b=b*2;
            c++;
        }
    }
    cout<<c;
    }


return 0;
}
