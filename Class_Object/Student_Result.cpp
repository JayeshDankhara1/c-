#include<iostream>
using namespace std;
class Student{
    protected:
    int roll_no;
    string name;
    int sub[5];
    int total;
    float par;
    float cal_par(int total);
    int cal_total();
};
class Result : private Student{
    public:
    Result()
    {
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
    ~Result(){
        cout<<"Roll No:-"<<roll_no<<endl;
        cout<<"Student Name:-"<<name<<endl;
        for(int i=0; i<5 ; i++)
        {
        cout<<"Subject "<<i+1<<" Mark:-"<<sub[i]<<endl;
        }
        cout<<"Total Mark:-"<<total<<endl;
        cout<<"Parchantage:-"<<par<<endl;
 
 
    }

};
float Student::cal_par(int total)
{  
    return float(total)/ 5.0 ;
}
int Student::cal_total()
{   int t=0;
    for(int i=0; i<5; i++)
    {
        t+=sub[i];
    }
    return t;
}


int main()
{  
    Result r[2];
    return 0;
}