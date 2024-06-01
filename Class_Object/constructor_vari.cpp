#include<iostream>
using namespace std;
class Area
{
   
    public:
    Area(int Base1 ,int Base2, int Hight)
    {
        cout<<"Trapezoid"<<endl;
        cout<<"Area :-"<<((Base1+Base2)*Hight)/2<<endl;
    }
    Area(int Width, int Lenth)
    {
        cout<<"Rectangle"<<endl;
        cout<<"Area:-"<<Width*Lenth<<endl;
    }
    Area(int r)
    {
        cout<<"Circle"<<endl;
        cout<<"Area:-"<<3.14*(r*r)<<endl;
    }

};
int main()
{   
    Area s(30,20),s1(20),s2(30,20,10);

    return 0;
}