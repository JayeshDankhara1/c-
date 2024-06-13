#include<iostream>
using namespace std;
class A{
    public:
    A()
    {
        cout<<"A Constoctor"<<endl;
    }
    ~A()
    {
        cout<<"A Desstoctor"<<endl;
    }
};
class B:public A{
    public:
    B()
    {
        cout<<"B Constoctor"<<endl;
    }
    ~B()
    {
        cout<<"B Desstoctor"<<endl;
    }
};
class C:public B {
    public:
    C()
    {
        cout<<"C Constoctor"<<endl;
    }
    ~C()
    {
        cout<<"C Desstoctor"<<endl;
    }
};
int main()
{
    C c;
    return 0;
}