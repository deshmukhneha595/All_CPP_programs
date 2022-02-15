/*Just remember one thing that make object only of derived class*/



#include<iostream>
using namespace std;
class ABC
{
     protected:int a;
     public:void getdata(int u)
     {
       a=u;
     }
     void showdata()
     {
         cout<<"The parent class having value:"<<a;
     }
};
class XYZ:public ABC
{
     int b;
     public:void getx(int v)
     {
       b=v;
     }
     void showx()
     {
         cout<<"The parent class having value:"<<b;
     }
};
int main()
{
    XYZ x1;
    x1.getdata(5);
    x1.showdata();
    x1.getx(3);
    x1.showx();
    return 0;
}
