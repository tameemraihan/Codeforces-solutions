#include<iostream>
using namespace std;
int main(){
    int x,n;
    long long t;
    cin>>t;
    while(t--){
      cin>>n;
       int c=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) c++;
    }
        if(c>=2) cout<<(n-1)<<endl;
        else if(c==0 || c==1) cout<<n<<endl;
    }

return 0;
}
