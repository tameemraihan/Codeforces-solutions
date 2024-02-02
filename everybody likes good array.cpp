#include<iostream>
using namespace std;
int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        long long n;
        cin >> n;
        long long a[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        long long c = 0;
        long long l = a[0]%2;
        for(long long k=1;k<n;k++){
            if(a[k]%2==l)c++;
            else l = a[k]%2;
        }
        cout << c << endl;
    }
return 0;
}
