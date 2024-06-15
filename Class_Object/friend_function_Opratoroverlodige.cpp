#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;
    }


int getvolume()
{
    return l*w*h;
}
 friend box operator+(box m,box n)
{
    box t;
    t.l=m.l+n.l;
    t.w=m.w+n.w;
    t.h=m.h+n.h;
    return t;
}
 friend box operator++(box n,int)
 {
    box t;
    t.l=++n.l;
    t.w=++n.w;
    t.h=++n.h;
    return t;
}
};

int main()
{
    box a,b,c,d;
    a.setdata(3,3,3);
    b.setdata(2,2,2);
    cout<<"volume of A is:"<<a.getvolume()<<endl;
    cout<<"volume of B is:"<<b.getvolume()<<endl;
    c=a+b;
     cout<<"volume of C is:"<<c.getvolume()<<endl;
     d =c++;
     cout<<"volume of D is:"<<d.getvolume()<<endl; 
}