#include <iostream>
using namespace std;

class large
{
    friend void find(large l); 
public:
    int a, b, c;

    void input()
    {
        cout << "Enter three numbers:";
        cin >> a >> b >> c;
    }

};

void find(large l) 
{
   
   if (l.a > l.b && l.a > l.c)
    {
        cout << "A is larg";
    }
    else if (l.b > l.c)
    {
        cout << "B is larg";
    }
    else
    {
        cout << "C is larg";
    }
}

int main()
{
    large l;
    l.input();

   cout << "value of A is : " << l.a << endl;
   cout << "value of B is : " << l.b << endl;
   cout << "value of C is : " << l.c << endl;

    find(l); 

    return 0;
}