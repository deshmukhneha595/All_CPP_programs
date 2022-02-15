/*WAP to find sum of two complex numbers using friend function*/


#include<iostream>
using namespace std;

class complex
{
    private:int real,img;
    public:complex()
    {
      real=0;
      img=0;
    }
    complex(int u,int v)
    {
        real=u;
        img=v;
    }
    void show()
    {
        cout<<"\n"<<real<<"+"<<img<<"i";
    }
    friend void sum(complex,complex);
};
void sum(complex t1,complex t2)
{
    cout<<"SUM= "<<t1.real+t2.real<<"+"<<t1.img+t2.img<<"i";
}
int main()
{
complex c1(5,3),c2(5,6);
c1.show();
c2.show();
sum(c1,c2);
return 0;
}

