#include<iostream>
#include<stdlib.h>
using namespace std;
void dispay(int num[], int n)
{
    cout<<"Dispay:-";
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
void add(int* num,int &n,int l)
{
    
    if(n<9){
    num[n]=l;
    n++;
    cout<<"Add Succsess"<<endl;}
    else
    cout<<"Stack is Full"<<endl;
}
void delet(int &n)
{
    if(n>0){
    n--;
    cout<<"Delete Last Eliment Succsess"<<endl;}
    else
    cout<<"Stack is Empty"<<endl;   
}
void Rendom(int* num,int n)
{
    //int *num= new int[n];
    for(int i=0; i<n ; i++)
    {
        num[i]=rand()%70;
    }
    //return num;    
}
void L_Sarch(int num[],int n,int sar)
{ int c=0;
    for(int i=0; i<n; i++){
        if(num[i]==sar)
        {   c++;
            cout<<"Enter you Eliment is Postion "<<i<<endl;
            break;
        }
    }
        if(c==0)
        {
        cout<<"The Eliment Not Found"<<endl;}
}
void B_sarch(int num[],int n,int sar)
{
    int l=0;
    int h=n;
    jump:
    if(l<=h){
    int mid=(l+h)/2;
    if(num[mid]==sar)
    {
        cout<<"Enter you Eliment is Postion "<<mid<<endl;
    }else if(num[mid]>sar)
    {
        h=--mid;
        goto jump;
    }else if (num[mid]<sar)
    {
        l=++mid;
        goto jump;
    }else
    {
        cout<<"Eliment Not Found"<<endl;
    }
    }
    else
    {
        cout<<"Eliment Not Found"<<endl;
    }
}
void Bubble_sorting(int* num,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(num[j]>num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    cout<<"Bubble sorting Done."<<endl;
}
void Selection_sorting(int* num,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(num[i]>num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    cout<<"Selection sorting Done."<<endl;
}
void Queue_Add(int* num, int &f , int &l,int vlaue)
{
    if(l<10){
        if(f==0 && l==0)
        {
            num[f]=vlaue;
            l++;
        }else
        {
            num[l]=vlaue;
            l++;
        }
    }else
    {
        cout<<"Queue Full"<<endl;
    }
}
void Queue_Dispaly(int num[], int &f , int &l)
{
    cout<<"Display:-";
    for(int i=f;i<l;i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
void Queue_Delete(int &f , int &l)
{
    if(f==l)
    {
        cout<<"Queue Is Emtpy"<<endl;
        f=0;
        l=0;
    }else
    {
        f++;
        cout<<"Delete Sucsses Full"<<endl;
    }
}
void Queue_Add_Circular(int* num,int &f,int &r,int value)
{
    if(f==0 && r==0)
    {
        num[f]=value;
        r=(r+1)%10;
        cout<<"Eliment Add Sucssess11111111."<<endl;

    }
    else if((r+1)%10==f){
        cout<<"Circular Queue As Full"<<endl;
    }else
    {
        num[r]=value;
        r=(r+1)%10;
        cout<<"Eliment Add Sucssess."<<endl;
    }
}
void Queue_Delete_Circular(int &f,int &r)
{
    if(f==r)
    {
        cout<<"Queue Is Empty"<<endl;
    }
    else{
        f=(f+1)%10;
        cout<<"Queue Is Delete"<<endl;
    }
}
void Queue_Dispaly_Circular(int num[],int f,int r)
{
    cout<<"Display:-";
    if(f<r)
    {
        for(int i=f;i<r;i++)
        {
            cout<<num[i]<<" ";
        }
    }else
    {  
        for(int i=f;i<=9;i++)
        {
            cout<<num[i]<<" ";
        }
        for(int i=0;i<r;i++)
        {
            cout<<num[i]<<" ";
        }

    }
    cout<<endl;
}
int main()
{
  // int num[10]={11,13,15,17,19,22,25,28};
    int num[10];
    // int* num;
    int l,Last=0,el,Fast=0;
    one:
    cout<<"1. Add(Stack)"<<endl;
    cout<<"2. Display(Stack)"<<endl;
    cout<<"3. Delete(Stack)"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"5. Rendome Arry"<<endl;
    cout<<"6. linier Sarch"<<endl;
    cout<<"7. Binery Sarch"<<endl;
    cout<<"8. Bubble Sorting"<<endl;
    cout<<"9. Selection Sorting"<<endl;
    cout<<"10. Add(Queue Simple)"<<endl;
    cout<<"11. Delete(Queue Simple)"<<endl;
    cout<<"12. Dispaly(Queue Simple)"<<endl;
    cout<<"13. Add(Queue Circular)"<<endl;
    cout<<"14. Delete(Queue Circular)"<<endl;
    cout<<"15. Dispaly(Queue Circular)"<<endl;


    cout<<"Enter you choice:-"<<endl;

    cin>>l;
    switch (l)
    {
    case 1 :
        cout<<"Enter You Eliment:-";
        cin>>el;
        add(num,Last,el);//Push_back
        goto one;
    case 2 :
        dispay(num,Last);
        goto one;
    case 3 :
        delet(Last);//pop_back
        goto one;
    case 4 :
        goto End;
    case 5 :
        cout<<"Enter you Size Of Arry:-";
        cin>>Last;
        Rendom(num,Last);
        //dispay(num,si-1);
        goto one;
    case 6 :
        cout<<"Enter you sarching Eliment:-";
        cin>>el;
        L_Sarch(num,Last,el);
        goto one;
    case 7 :
        cout<<"Enter you sarching Eliment:-";
        cin>>el;
        B_sarch(num,Last,el);
        goto one;
    case 8 :
        //Bubble Sorting
        Bubble_sorting(num,Last);
        goto one;
    case 9 :
        //Selecton Sorting
        Selection_sorting(num,Last);
        goto one;
    case 10 :
        cout<<"Enter You Eliment:-";
        cin>>el;
        Queue_Add(num,Fast,Last,el);
        goto one;
    case 11 :
        Queue_Delete(Fast,Last);
        goto one;
    case 12 :
        Queue_Dispaly(num,Fast,Last);
        goto one;
    case 13 :
        cout<<"Enter You Eliment:-";
        cin>>el;
        Queue_Add_Circular(num,Fast,Last,el);
        goto one;
    case 14 :
        Queue_Delete_Circular(Fast,Last);
        goto one;
    case 15 :
        Queue_Dispaly_Circular(num,Fast,Last);
        goto one;
    default:
        goto one;
    }
    End:
    return 0;
}