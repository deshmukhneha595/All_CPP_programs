/*WAP to find sum of two times using friend function*/


#include<iostream>
using namespace std;
class time
{
private:int hr,min;
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
    cout<<"hr:"<<hr<<"\t"<<"min:"<<min;
}
friend void sum(time,time);
};
void sum(time h1,time h2)
{int h,m;
    h=h1.hr+h2.hr+((h1.min+h2.min)/60);
    m=(h1.min+h2.min)%60;
    cout<<"\n"<<"sum :"<<"hr ="<<h<<"\t"<<"min ="<<m;
}
int main()
{
    time c1(4,35),c2(5,47);
    c1.show();
    c2.show();
    sum(c1,c2);
    return 0;
}

