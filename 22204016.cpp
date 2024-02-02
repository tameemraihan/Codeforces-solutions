#include<iostream>
using namespace std;

template<class T>
class mat{
public:
    int row,col;
    T m[20][20];
       mat(int a,int b)
    {
        row=a;
        col=b;
    }
    void check();
    void display();
    mat add(mat);
    mat sub(mat);
    mat mul(mat);
    mat sum_dia();
    mat trans();
};
template<class T>mat<T> mat<T>::add(mat<T> B)
{
    mat<T> C(row,col);
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            C.m[i][j]=m[i][j]+B.m[i][j];
    return C;
}
template<class T>mat<T> mat<T>::sub(mat<T> B)
{
    mat<T> C(row,col);
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            C.m[i][j]=m[i][j]-B.m[i][j];
    return C;
}
template<class T>mat<T> mat<T>::mul(mat<T> B)
{
    mat<T> C(row,col);
        for(int i=0; i<row; i++)
        {
        for(int j=0; j<col; j++)
            {
            C.m[i][j]=0;
            for(int k=0; k<row; k++)
                {
                C.m[i][j]=C.m[i][j]+(m[i][k]*B.m[k][j]);
                }
            }
        }
    return C;
}
template<class T>void mat<T>::check()
{
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cin>>m[i][j];
}
template<class T>void mat<T>::display()
{
    for(int i=0; i<row; i++)
    {
        cout<<"\n";
        for(int j=0; j<col; j++)
            cout<<"\t"<<m[i][j];
    }
}
template<class T>mat<T> mat<T>::trans()
{
    mat<T> C(row,col);
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            C.m[i][j]=m[j][i];
    return C;
}
template<class T>mat<T> mat<T>::sum_dia()
{
    int sum_left =0, sum_right = 0;
    mat <T> C(row, col);

    cout << "Enter elements into the matrix \n";

    for(int i=0; i<row ; i++){
    for(int j=0; j<col; j++){
      cin >> C.m[i][j];
      if(i==j)
        sum_left += C.m[i][j];
      if((i+j) == row-1)
        sum_right += C.m[i][j];
    }
  }

  cout << "Sum of Left Diagonal: "<< sum_left << endl;
  cout << "Sum of Right Diagonal: "<< sum_right << endl;
}
int main(){

    int row,col,choice,type;
    cout<<"Enter the type of the matrices:"<<endl;
    cout<<"1) Int \n2) String\n3) Char\n4) Float\n";
    cin>>type;
    //if(type==1) return mat<int>;
    //else if(type==2) return mat<string>;
    //else if(type==3) return mat<char>;
    //else return mat<float>;


    cout<<"Enter Matrix row size:";
    cin>>row;
    cout<<"Enter Matrix column size:";
    cin>>col;
    mat<int> m(row,col),m1(row,col),m2(row,col);

    while(1)
    {
    cout<<"\nEnter which operation?\n";
    cout<<"1) Addition of two matrices\n";
    cout<<"2) Subtraction of two matrices\n";
    cout<<"3) Multiplication of a matrix\n";
    cout<<"4) Transpose of two matrices\n";
    cout<<"5) Sum of diagonal elements\n";
    cout<<"6) Exit\n";
    cin>>choice;
    switch(choice)
        {
            case 1:
                cout<<"\nInput the first matrix: ";
                m.check();
                cout<<"\nInput the second matrix:";
                m1.check();
                cout<<endl;
                m2=m.add(m1);
                cout<<"\nAddition is: \n";
                m2.display();
                break;
            case 2:
                cout<<"\nInput the first matrix: ";
                m.check();
                cout<<"\nInput the second matrix:";
                m1.check();
                cout<<endl;
                m2=m.sub(m1);
                cout<<"\nSubtraction is: \n";
                m2.display();
                //m.sub();
                break;
            case 3:
                cout<<"\nInput the first matrix: ";
                m.check();
                cout<<"\nInput the second matrix:";
                m1.check();
                cout<<endl;
                m2=m.mul(m1);
                cout<<"\nMultiplication is: \n";
                m2.display();
                //m.mul();
                break;
            case 4:

                cout<<"\nInput the matrix: ";
                m.check();
                m2=m.trans();
                cout<<"\nMatrix transposition is: \n";
                m2.display();
                break;
            case 5:
                //cout<<"\nInput the matrix: ";
                //m.check();
                m2=m.sum_dia();
                //cout<<"\nMatrix diagonal sum is: \n";
                //cout << "Sum of Left Diagonal: "<< sum_left << endl;
                //cout << "Sum of Right Diagonal: "<< sum_right << endl;
                //m2.display();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Please Enter a valid choice";
        }
    }


return 0;
}
