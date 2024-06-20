#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream abc("a.txt");
    if(abc.is_open())
    {

    }else
    cout<<"File writige problem";
    return 0;
}

