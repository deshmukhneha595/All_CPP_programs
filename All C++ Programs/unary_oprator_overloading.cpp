/*Additional task to an operator is called operator overloading
Syntax:return_type_class_name::operator op(arglist)
{
function body;
}

WAP to change the sign of a number using unary operator overloading*/
#include<iostream>
using namespace std;
class probsignchange
{
    private:int num;
    public:void getdata()
    {
        cout<<"Enter the number:";
        cin>>num;

    }
    void showdata()
    {
        cout<<"the number is:"<<num;
    }
    void operator-();
};
void probsignchange::operator -()
{
    num=-num;
}
int main()
{
    probsignchange p1;
    p1.getdata();
    cout<<"Initially:";
    p1.showdata();
    -p1;
    cout<<"\nAfter call()";
     p1.showdata();
     return 0;
}
