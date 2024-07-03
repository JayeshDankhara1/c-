#include"hello.h"
#include<iostream>
using namespace std;

void MargArry1(int num[], int num1[],int n, int n1)
{   
    for(int i=n; i<n+n1; i++)
    {
        num[i]=num1[i-n];
    }
    
}
int main()
{
    int n[]={11,12,8};
    int n1[]={2,3,10,11};
    int *n3;
    int i=0;
        int k=sizeof(n)/sizeof(int);
        int l=sizeof(n1)/sizeof(int);
        //i=l+k;
        i=7;
        cout<<"l is "<<l<<" k is "<<k<<" i is "<<i<<endl;


        /*for(i=0; n[i]!='\0';i++);
        cout<<"i is"<<i<<endl;
        
        for(int j: n)
        {
            cout<<" "<<j;
        }
        cout<<endl;
        cout<<"Size "<<k<<l<<endl;
        DisplayArryInt(n,2);
        DisplayArryInt(n1,l);
    */i=7;
        n3=MargArry(n,n1,k,l);
        DisplayArryInt(n3,i);
        cout<<endl;
        /*for(int j: n3)
        {
            cout<<" "<<j;
        }
        cout<<endl;*/
        for(int z=0; z<7 ; z++)
        {
            cout<<" "<<n3[z];
        }
        cout<<endl;
       // DisplayArryInt(n,6);
               
    //DisplayArryInt(n);
}
