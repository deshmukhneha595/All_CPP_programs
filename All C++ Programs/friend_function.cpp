/*Friend function:The function that are declared as an function is known as friend function.
2.although friend function is not a member function has all rights to access the private members of the class
WAP to create 3 different class with one integer and each one have one integer number as a private.
Find sum of all private data members using friend function*/
#include<iostream>
using namespace std;
class ABC;
class UVW;
class XYZ
{
    private:int x;
    public:XYZ()
    {
      x=0;
    }
    XYZ(int u)
    {
        x=u;
    }
    friend int add(XYZ,ABC,UVW);
};
class ABC
{
    private:int y;
    public:ABC()
    {
      y=0;
    }
    ABC(int v)
    {
        y=v;
    }
    friend int add(XYZ,ABC,UVW);
};
class UVW
{
    private:int z;
    public:UVW()
    {
      z=0;
    }
   UVW(int s)
    {
        z=s;
    }
    friend int add(XYZ,ABC,UVW);
};
int add(XYZ t1,ABC t2,UVW t3)
{
    return(t1.x+t2.y+t3.z);
}
int main()
{
XYZ x1(5);
ABC a1(3);
UVW u1(8);
cout<<"Addition is= "<<add(x1,a1,u1);
return 0;
}
