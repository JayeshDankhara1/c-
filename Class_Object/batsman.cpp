#include<iostream>
using namespace std;
class Batsman
{   
    private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;
    float calcavg(int innings,int notout,int runs);
    public:
    void readdata()
    {
        cout<<"Enter The Bcode:-";
        cin>>bcode;
        cout<<"Enter The Bname:-";
        cin>>bname;
        cout<<"Enter The Inninge:-";
        cin>>innings;
        cout<<"Enter The Not out:-";
        cin>>notout;
        cout<<"Enter The Run:-";
        cin>>runs;
    }
    void displaydata()
    {   
        cout<<"Bcode:-"<<bcode<<endl;
        cout<<"Bname:-"<<bname<<endl;
        cout<<"Inning:-"<<innings<<endl;
        cout<<"Not out:-"<<notout<<endl;
        cout<<"Run:-"<<runs<<endl;
        cout<<"Batavg:-"<<calcavg(innings,notout,runs)<<endl;
    }
};
float Batsman :: calcavg(int innings,int notout,int runs)
{
    return runs/(innings-notout);
}
int main()
{
    class Batsman b1;
    b1.readdata();
    b1.displaydata();
    return 0;
}