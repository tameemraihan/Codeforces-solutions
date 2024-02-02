#include<iostream>
#include<vector>
using namespace std;
int main(){
    int i=0,n,input;
    cin>>n;
    vector<int>P,N,Z,S;
    for(i=0;i<n;i++){
        cin>>input;
        if(input<0){
            N.push_back(input);
        }
        else if(input>0){
            P.push_back(input);
        }
        else
            Z.push_back(input);
    }
    int x=P.size();
    int y=N.size();
    int z;
    vector<int> ::iterator it,it1,it2;
    if(x==0)
    {
        if(y%2==0)
        {
            for(i=0;i<2;i++)
            {
               P.push_back(N[i]);
               it=N.begin();
               N.erase(it);
               advance(it,1);
            }
        }

        else if(y%2!=0)
        {
            //x=(y/2)+1;
            for(i=0; i<y; i++)
            {
            P.push_back(N[i]);
            it=N.begin();
            N.erase(it);
            advance(it,1);
            }

        }
    }

    else if(x!=0){
        if(y%2==0)
        {
            for(i=y;i>0;i--)
            {
            //z=N.pop_back();
            Z.push_back(N[i]);
            it=N.end();
            N.erase(it);
            it=N.end();
            }
        }
    }

    cout << N.size() << " ";
    for(i=0; i<N.size(); i++)
    {
        cout << N[i] << " ";
    }
    cout << "\n";

    cout << P.size() << " ";
    for(i=0; i<P.size(); i++)
    {
        cout << P[i] << " ";
    }

    cout << "\n";
    cout << Z.size() << " ";
    for(i=0; i<Z.size(); i++)
    {
        cout << Z[i] << " ";
    }

return 0;
}
