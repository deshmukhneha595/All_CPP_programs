/*write a menu driven program using inline functions for finding square of a number ,cube of a number ,
maximum of two numbers*/
#include<iostream>
using namespace std;
inline double sqrt(double a)
{
    return a*a;
}
inline double cube(double a)
{
    return a*a*a;
}
inline double maxi(double n1,double n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}

int main()
{
    int ch,num,sq,c,f,g,maximum,yes,y,option,select;
    cout<<"Enter choice from 1,2,3 :";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"Enter the Number";
        cin>>num;
        sq=sqrt(num);
        cout<<"Square is="<<sq;
        break;
        case 2:cout<<"Enter the Number";
        cin>>num;
        c=cube(num);
        cout<<"cube is="<<c;
         break;
        case 3:cout<<"Enter two Number";
        cin>>f>>g;
        maximum=maxi(f,g);
        cout<<"Maximum is="<<maximum;
         break;
         default:cout<<"UFFF...you entered wrong choice‍";

    }


}
