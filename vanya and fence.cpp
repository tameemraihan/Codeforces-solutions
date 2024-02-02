//677-A Vanya and fence ::
#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int input,c;
    for(int i=0;i<n;i++){
        cin>>input;
        if(input>h) c=c+2;
        else c++;
    }
    cout<<c;
return 0;
}
