#include<iostream>
using namespace std;


class A
{
    public:void show()
    {
     cout<<"Hello\n";
    }
};
class B:public virtual A
{

};
class c:public virtual  A
{

};
class D:public B, public c
{

};
int main()
{
    D d1;
    d1.show();
}
