#include<iostream>
using namespace std;
int main(){
    int t;
    long long int x;
    cin>>t;
    int arr[t-1];

   for(int i=0;i<t;i++)
{
    int count=0;
    cin>>x;
    if(x==1){
        cout<<'0';
        continue;
    }
    if(x%3!=0){
        cout<<'-'<<'1';
        continue;
    }
    while(x!=1)
    {
       if(x!=1 && x%6==0)
        {
            x=x/6;
        }
        else
            x=x*2;
        count++;
       continue;
    }
    for(int j=0;j<t;j++)
    {

        arr[j]=count;
    }
   //cout<<count;
}
    for(int m=0;m<(t-1);m++){
        cout<<arr[m]<<endl;
    }

return 0;
}
