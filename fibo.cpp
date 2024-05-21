#include<iostream>
//using namespace std;
int main()
{
    int t,t1=0,t2=1;
    for(int i=1 ; i<=10 ; i++)
    {
        std::cout<<t1<<" ";
        t=t1+t2;
        t1=t2;
        t2=t;
    }
    return 0;
}