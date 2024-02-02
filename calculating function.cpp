#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int user_input,cal;
    cin >> user_input;
    if(user_input%2==0){
        cout << user_input/2;
    }else{
        cal = -(user_input/2+1);
        cout << cal;
    }
    return 0;
}
