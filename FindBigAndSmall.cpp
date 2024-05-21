#include<iostream>
using namespace std;
void find(int x,int y,int* s,int* b)
{
    if(x<y)
    {   *s=x;
        *b=y;
       // cout<<"small "<<x<<endl;
       // cout<<"Big "<<y;
    }else
    {   *s=y;
        *b=x;
       // cout<<"small "<<y<<endl;
       // cout<<"Big "<<x;
    }
}
int main()
{   int s,b;
    find(20,15,&s,&b);
    cout<<"small "<<s<<endl;
    cout<<"Big "<<b;
       return 0;
}
