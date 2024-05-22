#include<iostream>
#include<string.h>
using namespace std;
struct empolaye
{
    string name;
    char gaender;
    int salery;
    bool stetus;
    float gredepay;

}e;

int main()
{
    e.name="jayesh";
    e.gaender='M';
    e.salery=1500;
    e.stetus=true;
    e.gredepay=10.5;
    cout<<e.name<<endl;
    cout<<e.gaender<<endl;
    cout<<e.salery<<endl;
    cout<<e.stetus<<endl;
    cout<<e.gredepay<<endl;
   return 0; 
}

