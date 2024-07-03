#include<iostream>
using namespace std;
template<class A, class B>
void dis(A t1, B t2)
{
    //cout<<"Dispaly templete Class A:"<<t1<<endl;
    // cout<<"Dispaly templete Class B:"<<t2<<endl;
    cout<<t1+t2;
}

int main()
{
    dis(10,200.1   );
}