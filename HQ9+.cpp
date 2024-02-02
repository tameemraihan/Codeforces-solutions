#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cin >> input;
    int c = 0,ch=0;

    for(int i=0;i<input.size();i++){
        if(input[i]=='H' or input[i]=='Q' or input[i]=='9'){
            c++;
        }
    }
    if(c==0){cout<<"NO"<<endl;}
    else{cout << "YES" << endl;}

return 0;
}
