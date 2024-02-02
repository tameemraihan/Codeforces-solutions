#include<bits/stdc++.h>
#define ll long long
using namespace std;
void check(){
    ll n;
    cin >>n;

    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin >> v[i];
    }
    vector<ll>b(n),c(n);

        b[0] = v[0];

        for(ll i =1;i<n;i++){
            b[i] = b[i-1] + v[i];
        }

        c[n-1] = v[n-1];
        for(ll i = n-2;i>=0;i--){
            c[i] = c[i+1] + v[i];
        }

        ll ch = 0;
        for(ll j=0;j<n-1;j++){
            ch = max(ch,__gcd(b[j],c[j+1]));
        }
        cout << ch << endl;

}
int main(){
    ll t;
    cin >> t;

    while(t--){
        check();
    }
}
