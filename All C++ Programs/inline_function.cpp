//inline function
#include<iostream>
using namespace std;
inline float cube(float a)
{
    return a*a*a;
}
int main()
{
    cout<<cube(3.0)<<endl;
    cout<<cube(5);
    return 0;
}

//o/p:27
//125
