#include<iostream>
using namespace std;
int main(){
    int A=0,B=0;
    long long int t;
    cin>>t;
    int a[4];
    int j=0;
    int c=0;
    int x;
    for(long long int i=0;i<t;i++){
        for(int m=0;m<4;m++){
            cin>>x;
            a[m]=x;
        }
        for(int k=0;k<4;k++){
            if(a[0]!=0){
                A=A+a[0];
                B=A;
                if(A>=0 && B>=0) c++;
                else return c;
            }
            else if(a[1]!=0){
                A++;
                B--;
                if(A>=0 && B>=0) c++;
                else return c;
            }
            else if(a[2]!=0){
                B++;
                A--;
                if(A>=0 && B>=0) c++;
                else return c;
            }
            else if(a[3]!=0){
                A=A-a[3];
                B=B-a[3];
                if(A>=0 && B>=0) c++;
                else return c;
            }

        }
        cout<<c<<endl;
    }
return 0;
}
