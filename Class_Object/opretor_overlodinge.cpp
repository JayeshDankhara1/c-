#include<iostream>
using namespace std;
class cal
{
    int a,b;
    public:
    cal operator+(cal &x)
    {
        cal l;
        l.a=a+x.a;
        l.b=b+x.b;
        return l;
    }
    cal operator++()
    {
        cal l;
        l.a=++a;
        l.b=++b;
        return l;
    }
    cal operator++(int)
    {
        cal l;
        l.a=a++;
        l.b=b++;
        return l;
    }

    int add()
    { 
        return a + b ;
    }
    void set(int m, int n)
    {
        a=m;
        b=n;
    }
    void print()
    {
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
        }

};  
int main()
{
    cal c,d,e;
    c.set(10,11);
    d.set(15,20);
   // e=c+d; //25 , 31
    e=c++;
    cout<<"C:-"<<c.add()<<endl;
    c.print();
    cout<<"D:-"<<d.add()<<endl;
    d.print();
    cout<<"E:-"<<e.add()<<endl;
    e.print();
    return 0;
}