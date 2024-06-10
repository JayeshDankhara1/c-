#include<iostream>
using namespace std;
class Student1{
    private:
    int roll_no;
    string name;
    int sub[5];
    int total;
    float par;
    float cal_par(int total);
    int cal_total();
    public:
   Student1(){
        cout<<"Enter You Roll No:-";
        cin>>roll_no;
        cout<<"Enter You Name:-";
        cin>>name;
        for(int i=0; i<5; i++)
        {
            cout<<"Enter You Subject "<<i+1<<" Mark:-";
            cin>>sub[i];
        }
        total=cal_total();
        par=cal_par(total);
    }
    friend void display(Student1 &s);

};
float Student1::cal_par(int total)
{  
    return total / 5.0 ;
}
int Student1::cal_total()
{   int t=0;
    for(int i=0; i<5; i++)
    {
        t+=sub[i];
    }
    return t;
}
void display(Student1 &s)
{
    cout<<s.roll_no<<endl;
    cout<<s.name<<endl;
    for(int i=0; i<5 ; i++)
    {
    cout<<s.sub[i]<<endl;
    }
    cout<<s.total<<endl;
    cout<<s.par<endl;
}
int main()
{   Student1 s;
    display(s);   
    return 0;

}