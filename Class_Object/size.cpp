#include <iostream>

using namespace std;
class A{
    public:
    void fa(int a)
    {
        cout<<"inteigaer Function call"<<endl;
    }
    void fa(float a)
    {
        cout<<"float Function call"<<endl;
    }
    void fa(double a)
    {
        cout<<"doubal Function call"<<endl;
    }
};
int main()
{
    int i[]={1};
    long l[]={1};
    float f[]={1.1};
    double d[]={1.1};
    long double ld[]={1.1};
    char c[]={'1'};
    //double long num[]={1.1};
    std::cout<<"Int "<<sizeof(i)<<endl;
    std::cout<<"long "<<sizeof(l)<<endl;
    std::cout<<"float "<<sizeof(f)<<endl;
    std::cout<<"double "<<sizeof(d)<<endl;
    std::cout<<"long double "<<sizeof(ld)<<endl;
    std::cout<<"char "<<sizeof(c)<<endl;

    A a;
    a.fa(int (1));
    a.fa(float (1));
    a.fa(double (1));

    return 0;
}
