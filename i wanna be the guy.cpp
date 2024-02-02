#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>p1,q1;
    int n,x,c=0;
    cin>>n;
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++) {
        cin>>x;
        p1.push_back(x);
    }
    cin>>q;
    vector<int>r(p+q);
    for(int i=0;i<q;i++) {
        cin>>x;
        q1.push_back(x);
    }
    sort(p1.begin(),p1.end());
    sort(q1.begin(),q1.end());
    merge(p1.begin(),p1.end(),q1.begin(),q1.end(),r.begin());
    for(int i=0;i<r.size();i++){
        if(r[i]!=r[i+1]) c++;
    }
    if(c==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
return 0;
}
