#include <iostream>
#include <string>
using namespace std;
int main(){
     int y;
     string x;
     cin>>y;

     while(1){
     y++;
     x=to_string(y);

            if(x[0]!=x[1]&&x[0]!=x[2]&&x[0]!=x[3]
               &&x[1]!=x[2]&&x[1]!=x[3]&&x[2]!=x[3])
            {
                cout<<x;
                break;
            }
     }
   return 0;
}
