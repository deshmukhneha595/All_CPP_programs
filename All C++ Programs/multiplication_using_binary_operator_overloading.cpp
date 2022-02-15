/*WAP to find multiplication of two numbers using binary operator overloading*/
#include<iostream>
using namespace std;
class mult{
private: int num;
public:mult()
{
    num=0;
}
mult(int a)
{
    num=a;
}
void show()
{
    cout<<"\nThe num is:\n"<<num;
}
mult operator *(mult);



};
mult mult::operator *(mult m1)
{
    mult m2;
    m2.num=num*m1.num;
    return m2;
}
int main()
{

   mult c1(3);
   mult c2(2);
   c1.show();
   c2.show();
   mult c3;
   c3=c2*c1;

      c3.show();
      return 0;
}
