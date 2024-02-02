#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
    string x;
    cin>>x;
    int l=x.size();
    transform(x.begin(),x.end(),x.begin(), ::tolower);
    for(int i=0;i<l;i++){
        if(x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'u' && x[i] !='y'){
            cout<<"."<<x[i];
        }

    }
return 0;
}
