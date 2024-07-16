#include<iostream>
using namespace std;
void Display(int num[],int fast, int last)
{
    cout<<"Display:-";
    for(int i=fast; i<=last; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
void Marge_sort(int *num,int fast,int last,int mid)
{
    int n=mid-fast+1;
    //cout<<"n:-"<<n<<endl;
    //cout<<"mid:-"<<mid<<endl;
    
    int m=(last-mid);
    //cout<<"m:-"<<m<<endl;
    int num1[n];
    int num2[m];
    int num3[m+n];
    for(int i=0; i<n;i++)
       { num1[i]=num[i];}
    Display(num1,0,n-1);
    for(int i=0;i<m;i++)
       { num2[i]=num[mid+i+1];}
    Display(num2,0,m-1);
    int index1=-1,index2=-1;
    for(int i=0; i<m+n;i++)
    {
        if(index1<m-1 && index2<n-1)
        {
            if(num1[index1]<num2[index2])
                num3[i]=num1[++index1];
            else
                num3[i]=num2[++index2];
        }else if(index1<m-1)
            num3[i]=num1[++index1];
        else
            num3[i]=num2[++index2];

    }

    for(int i=0; i<=m+n;i++)
    {
        num[i]=num3[i];
    }

}
void Marge_sort(int *num,int fast,int last)
{
    Display(num,fast,last);
    if(fast<last){
    int mid=(fast+last)/2;
    Marge_sort(num,fast,mid);
    Marge_sort(num,mid+1,last);
    Marge_sort(num,fast,last,mid);

    }

}
int main()
{
    int num[]={80,22,85,30,24,1,99,4,44,67};
    Marge_sort(num,0,9);
    Display(num,0,9);

}