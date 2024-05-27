#include<iostream>
using namespace std;
class Test
{   private:
    int  TestCode;
    string Description;
    int NoCandidate;
    int CenterReqd;
    int CALCNTR(int NoCandidate)
    {
        return NoCandidate/100+1;
    }
    public:
    void schedule()
    {
        cout<<"Enter Test Code:-";
        cin>>TestCode;
        cout<<"Enter Descripition:-";
        cin>>Description;
        cout<<"Enter NoCandidate:-";
        cin>>NoCandidate;
        CenterReqd=CALCNTR(NoCandidate);

    }
    void disptest()
    {
    cout<<"Test Code:-"<<TestCode<<endl;
    cout<<"Description:-"<< Description<<endl;
    cout<<"NoCandidate:-"<<NoCandidate<<endl;
    cout<<"CenterReqd:-"<<CenterReqd<<endl;
    }
};
int main()
{
    class Test t;
    t.schedule();
    t.disptest();
    return 0;
}