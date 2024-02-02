#include<iostream>
#include<string>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    string y;
    y=to_string(x);
    int c;
    //cout<<y;
    for(int i=0;i<y.size();i++){
        if(y[i]=='4' || y[i]=='7') c++;
    }
    if(c==4||c==7) cout<<"YES";
    else cout<<"NO";

return 0;
}
