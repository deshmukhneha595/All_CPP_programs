#include<iostream>

using namespace std;
int main()
{
    int a,c,n;
    a=1;
    c=1;
    cout<<"Enter the Number :";
    cin>>n;
    while(a<=n)
    {
        c=c*a;
        a=a+1;
    }
        cout<<c;


}
