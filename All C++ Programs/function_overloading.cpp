/*function overloading-the same name of function can perform differnt tasks is called function overloading
WAP to find the volume of of cylinder and rectangular box  using function overloading concept*/
#include<iostream>
using namespace std;
int volume(int r,int h)
{
    return (2*3.14*r*h);
}
int volume(int l,int w,int h)
{
    return l*w*h;
}
int main()
{
    cout<<volume(4,5)<<"\n";
    cout<<volume(2,3,4)<<"\n";
    return 0;
}
