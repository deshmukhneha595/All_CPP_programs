//WAP to find sum of 2 times
#include<iostream>
using namespace std;
class timer
{
    int hr,min;
    public:timer()
    {
        hr=0;
       min=0;
    }
    timer(int a,int b)
    {
        hr=a;
         min=b;
    }
    void show()
    {
        cout<<"hr:\t"<<hr<<"\tmin:\t"<<min;
    }
    timer sum(timer c1)
    {
        timer c2;
        c2.min=min+c1.min;
        c2.hr=hr+c1.hr+(c2.min/60);
        c2.min=c2.min%60;
        return c2;
    }
};

int main()
{
     timer a1(4,35);
     cout<<"\nFirst time:\n";
     a1.show();

     timer a2(5,47);
     cout<<"\nSecond time:\n";
     a2.show();
     timer a3;
     a3=a2.sum(a1);
     cout<<"\nSum=\n";
     a3.show();

}
