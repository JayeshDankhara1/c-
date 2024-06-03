#include<iostream>
using namespace std;
   
class cal{
    public:
    void add(int num, int num1)
    {
        cout<< "Addtion "<<num<<" , "<<num1<<":- "<<num+num1<<endl;
    }
    void add(double num, double num1)
    {
        cout<< "Addtion "<<num<<" , "<<num1<<":- "<<num+num1<<endl;
    }
    void add(int num, int num1,int num2)
    {
        cout<< "Addtion "<<num<<" , "<<num1<<" , "<<num2<<":- "<<num+num1<<endl;
    }
    void add(double num, double num1,double num2)
    {
        cout<< "Addtion "<<num<<" , "<<num1<<" , "<<num2<<":- "<<num+num1<<endl;
    }
   
};
int main()
{
    int z=1;
    cal c;
   // c.add(10.1,11.8);
 //  c.print(1);
   //c.print(1.1);
   print(z);
 //  print(1.1);
}