#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string x;
    cin>>x;
    int count=0;
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++){ //sizeof(x) dile runtime error hoy !!!!
        if(x[i]!=x[i+1]){
            count++;
        }
    }

    if(count%2!=0){
        cout<<"IGNORE HIM!";
    }
    else
        cout<<"CHAT WITH HER!";
return 0;
}
