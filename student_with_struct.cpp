#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    string name;
    int mark[3];
    int total;
};
int main()
{   
    struct student s;
    cout<<"Enter you Sudent Name:-";
    cin>>s.name;
    s.total=0;
    for(int i=0; i<3; i++)
    {
        cout<<"Enter you "<<i+1<<" Subject Mark:-";
        cin>>s.mark[i];
        s.total+=s.mark[i];
    }
    cout<<s.name<<endl;
    for(int i=0; i<3; i++)
    {   cout<<"Subject "<<i+1<<" Marks:-";
        cout<<s.mark[i]<<endl;
    }
    cout<<"Total Mark's:-"<<s.total;

    return 0;
}