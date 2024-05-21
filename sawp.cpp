#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter your Fast number:-";
    cin>>a;
    cout<<"Enter your Secounde number:-";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Fast Number "<<a<<endl;
    cout<<"Secound Number "<<b<<endl;
    return 0;
}