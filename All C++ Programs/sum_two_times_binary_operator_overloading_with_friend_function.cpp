/*WAP to find sum of two times using binary operator overloading with friend function*/
#include<iostream>
using namespace std;
class time{
private: int hr,min;
public:time()
{
    hr=0;
    min=0;
}
time(int a,int b)
{
   hr=a;
   min=b;
}
void show()
{
    cout<<"hr :"<<hr<<"\t+  "<<"min: "<<min<<"\n";
}
friend time operator +(time,time);
};
time operator +(time t1,time t2)
{

   time t3;
   t3.min=t1.min+t2.min;
   t3.hr=t1.hr+t2.hr+(t3.min/60);
   t3.min=(t3.min%60);
   return t3;
}


int main()
{

  time c1(3,50);
time c2(2,40);
   c1.show();
   c2.show();
  time c3;
   c3=c2+c1;

      c3.show();
      return 0;
}

