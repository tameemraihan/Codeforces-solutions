#include<iostream>
using namespace std;
class Janina{
public:
    int data;
    string name;
    void print(){
    cout<<"Hello World"<<endl;
    }
    int sum(int x, int y);
};
Janina::sum(int x, int y){
return x+y;
}
int main(){
    int num1, num2;
    num1=100;
    num2=200;
    Janina janina1;
    janina1.data=100;
    janina1.name= "touhid";
    janina1.print();
    cout<<janina1.data<<endl<<janina1.name<<endl;
    int z=janina1.sum(num1, num2);
    cout<<z<<endl;
    //cout<<"Hello World";
return 0;
}
