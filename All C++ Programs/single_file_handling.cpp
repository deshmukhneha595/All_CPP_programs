/*WAP to read and write operations on item.txt file*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream outf("item.txt");
cout<<"Enter the item name:";
char name[30];
cin>>name;
outf<<name<<"\n";
cout<<"Enter the item cost:";
float cost;
cin>>cost;
outf<<cost<<"\n";
outf.close();
ifstream inf("item.txt");
inf>>name;
inf>>cost;
cout<<"Name of item is: "<<name<<"\n";
cout<<"Cost of item is: "<<cost<<"\n";
inf.close();



    return 0;
}
