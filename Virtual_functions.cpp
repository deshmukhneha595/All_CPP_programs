/*virtual function: If we use both both base class and derived class and if we want to call derived class
 using base class pointer then we declare the function as virtual function*/

#include<iostream>
using namespace std;
class ABC
{
    public:
virtual void show()
{
    cout<<"Parent function";
}
};
class XYZ:public ABC
{public:
    void show()
    {
        cout<<"Child function";
    }

};
int main()
{
ABC a1,*ptr;
XYZ x1;
ptr=&a1;
ptr->show();
ptr=&x1;
ptr->show();

}
