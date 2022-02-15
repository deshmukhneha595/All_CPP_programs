/*WAP to perform addition of two complex numbers using binary operator overloading*/

#include<iostream>
using namespace std;
class complex{
private: int real,img;
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
    cout<<"real :"<<real<<"\t+  "<<"img: "<<img<<"i\n";
}
complex operator +(complex c1)
{
    complex c2;
    c2.real=real+c1.real;
    c2.img=img+c1.img;
    return c2;
}



};

int main()
{

   complex t1(3,5);
   complex t2(2,8);
   t1.show();
   t2.show();
   complex t3;
   t3=t2+t1;

      t3.show();
      return 0;
}
