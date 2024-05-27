#include<iostream>
using namespace std;
 
class Student
{   
    private:
    int admino;
    char sname[20];
    float eng, math, science,total; 
    float ctotal(float eng,float math,float science);
    
    public:
    void takedata(){
        cout<<"Enter The Admino:- ";
        cin>>admino;
        cout<<"Enter Sname:- ";
        cin>>sname;
        cout<<"Enter Eng Mark:-";
        cin>>eng;
        cout<<"Enter Math Mark:-";
        cin>>math;
        cout<<"Enter Science Mark:-";
        cin>>science;        
    }
    showdata()
    {
        cout<<"AdminNo:-"<<admino<<endl;
        cout<<"Sname:-"<<sname<<endl;
        cout<<"Eng Mark:-"<<eng<<endl;
        cout<<"Math Mark:-"<<math<<endl;
        cout<<"Science Mark:-"<<science<<endl;
        total=ctotal(eng,math,science);
        cout<<"Total Mark:-"<<total<<endl;
    }
};
float Student::ctotal(float eng,float math,float science)
{
    return eng+math+science;    
}
int main()
{   class Student s1;
    s1.takedata();
    s1.showdata();
    return 0;
};