#include<iostream>
using namespace std;
class Report{
    private:
    int admno;
    char name[20];
    float marks[5];
    float avgmark;
    float getavg(float marks[5]);
    public:
    void readinfo()
    {

        cout<<"Enter you Admin No:-";
        cin>>admno;
        cout<<"Enter You Name:-";
        cin>>name;
        for(int i=0; i<5; i++){
        cout<<"Enter You Mark" << i+1<<":-";
        cin>>marks[i];
        avgmark=getavg(marks);
        }
    }
    void dipayinfo()
    {
        cout<<"Admin No:-"<<admno<<endl;
        cout<<"Name:-"<<name<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<"Mark "<<i+1<<":-"<<marks[i]<<endl;
        }
        cout<<"Avrege:-"<<avgmark<<endl;
    }

};

float Report :: getavg(float marks[5])
{
    float to=0;
    for(int i=0;i<5;i++)
    {
        to+=marks[i];
    }
    return to/5;
}
int main()
{
    class Report r;
    r.readinfo();
    r.dipayinfo();
    return 0;
}