//WAP using inline function to perform multiplication and division of 2 Numberss
#include<iostream>
using namespace std;
inline double mult(double a,double b)
{
    return a*b;
}
inline double div(double a,double b)
{
    return double(a/b);
}
int main()
{
    cout<<"Multiplication is="<<mult(5.0,6.0)<<endl;
    cout<<"Division is="<<div(5.0,6.0);
    return 0;
}

//output:Multiplication is=30
//Division is=0.833333
