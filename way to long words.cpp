#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;

int main(){
    int t;
    cin>>t;
    string x;

        while(t!=0){
        cin>>x;
        int s=x.size();
        if(s>10){
            cout<<x[0]<<(s-2)<<x[s-1]<<endl;
        }
        else cout<< x<<endl;
        t--;
    }

return 0;
}
