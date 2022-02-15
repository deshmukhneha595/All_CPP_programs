/*WAP to perform pre-increment,post-increment,pre-decrement,post-decrement
 using unary operator overloading*/


#include<iostream>
using namespace std;
class ProgInDe
{
private:int num;
    public:
        ProgInDe()
        {
            num=0;
        }
        ProgInDe(int a)
        {
            num=a;
        }
        void get()
        {
            cout<<"\nEnter the number\n";
            cin>>num;
        }

        void show()
        {
            cout<<"\nthe num is:"<<num;
        }
        void operator++();
        void operator++(int);
         void operator--();
          void operator--(int);
};
        void ProgInDe ::operator++()
        {
            ++num;
        }

        void ProgInDe::operator++(int)
        {
            num++;
        }
        void ProgInDe::operator--()
        {
            --num;
        }
        void ProgInDe::operator--(int)
        {
            num--;
        }
int main()
{
    ProgInDe id;
    id.get();
    cout<<"pre-increment is:\n";
    ++id;
    id.show();
    id.get();
    cout<<"post-increment is:\n";
    id++;
     id.show();
     id.get();
     cout<<"pre-decrement is:\n";
    --id;
 id.show();
 id.get();
    cout<<"post-decrement is:\n";
    id--;
 id.show();
    return 0;
}
