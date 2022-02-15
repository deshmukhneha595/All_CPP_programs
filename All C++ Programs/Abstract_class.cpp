/*Abstract class:
Abstract class is one that not used to create objects
It is only act as base class*/
#include<iostream>
using namespace std;
abstract class ABC
{
    public:void show()
    {
        cout<<"Hello";
    }
}
int main()
{
ABC a1;
a1.show();
}


//This program gives us a error because we can't create object of abstract class
