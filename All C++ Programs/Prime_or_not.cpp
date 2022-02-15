//This is a program for checking the number is prime or not
#include<iostream>
using namespace std;
int main()
{
    int n,cnt,a,c;
     cout<<"Enter the Number :";
     cin>>n;
     a=1;
     cnt=0;
     while(a<=n)
     {
         c=n%a;
         if(c==0)
         cnt=cnt+1;
         a=a+1;
     }
     if(cnt==2)
        cout<<"Prime Number";
     else
        cout<<"Not Prime Number";
}
