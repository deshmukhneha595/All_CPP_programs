//WAP to find sum of 2 complex numbers
#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:complex()
    {
        real=0;
        img=0;
    }
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    void show()
    {
        cout<<real<<"+"<<img<<"i";
    }
    complex sum(complex c1)
    {
        complex c2;
        c2.real=real+c1.real;
        c2.img=img+c1.img;
        return c2;
    }
};

int main()
{
     complex a1(4,5);
     cout<<"\nFirst complex number:\n";
     a1.show();

     complex a2(2,5);
     cout<<"\nSecond complex number:\n";
     a2.show();
     complex a3;
     a3=a2.sum(a1);
     cout<<"\nSum=\n";
     a3.show();

}
