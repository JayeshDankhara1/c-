#include<iostream>
using namespace std;

void DisplayArryInt(int* num,int &n)
{   
    //int n=sizeof(num);
    cout<< "Display:- "<<n<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<" "<<num[i];
    }
    cout<<endl;
}
int* MargArry(int* num, int* num1,int &n, int &n1)
{   int* num3 = new int[10];
    
    for(int i=0; i<n+n1; i++)
    {
        if(i<n)
        num3[i]=num[i];
        else
        num3[i]=num1[i-n];
    }
    return num3;
    
}