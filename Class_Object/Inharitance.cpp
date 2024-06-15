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
class B :public A{
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
class C : public A {
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
class D : public B,public C {
    public:
    D()
    {
        cout<<"d Constoctor"<<endl;
    }
    ~D()
    {
        cout<<"d Desstoctor"<<endl;
    }

};
class E : public B{
    public:
    E()
    {
        cout<<"E Constoctor"<<endl;
    }
    ~E()
    {
        cout<<"E Desstoctor"<<endl;
    }
};
class F {
    public:
    F()
    {
        cout<<"F Constoctor"<<endl;
    }
    ~F()
    {
        cout<<"F Desstoctor"<<endl;
    }
};

class G : public A, public F {
    public:
    G()
    {
        cout<<"G Constoctor"<<endl;
    }
    ~G()
    {
        cout<<"G Desstoctor"<<endl;
    }
};

int main()
{
   
    B b;//singl ingaritanc 

    D D;//Hibride inharitance

    // Hiracical inharitance
    B b1;
    C C;

    E E;// Multileval Inharitance

    G G; // Multipul Inharitance
    return 0;
}