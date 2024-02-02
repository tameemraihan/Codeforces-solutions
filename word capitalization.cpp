#include<iostream>
#include<cctype>
using namespace std;
int main(){
    string x;
    cin>>x;
    //int i=0;
    cout<<(char) toupper(x[0]);
    for(int i=1;i<x.size();i++){
        cout<<x[i];
    }
return 0;
}
