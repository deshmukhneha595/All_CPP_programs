#include<iostream>
using namespace std;
class ABC
{
    public:ABC()
    {


    cout<<"parent constructor\n";
    }
};
class XYZ:public ABC
{
    public:XYZ()
    {
    cout<<"child constructor";
    }
};
int main()
{

XYZ x1;

}


/*O/p:parent constructor
child constructor*/
