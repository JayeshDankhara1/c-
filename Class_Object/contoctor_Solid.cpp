#include<iostream>
using namespace std;
class Surface_Area
{
    //Surface Area = 2×(10×10 + 10×10 + 10×10) = 600 meters2

   // Surface Area = 6×102 = 600 meters2

    public:
    Surface_Area(int Hight, int Width, int Lenth)
    {
        cout<<"Rectangular Tank Surface Area"<<endl;
        cout<<"Surface Area :-"<<2*((Lenth*Hight)+(Lenth*Width)+(Width*Hight))<<endl;
    }
    Surface_Area(int Edge)
    {
        cout<<"Cube Surface Area"<<endl;
        cout<<"Surface Area :-"<<6*Edge<<endl;
    }
    Surface_Area()
    {
        cout<<"Defult Constoctor Use"<<endl;
    }

};
int main()
{   
    Surface_Area s(10,10,10),s1(10),s2;

    return 0;
}