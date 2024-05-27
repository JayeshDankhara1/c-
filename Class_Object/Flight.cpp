#include<iostream>
#include<string>
using namespace std;
class Flight

{
    private:
    int flight;
    string destination;
    float distance;
    float fuel;
    float calfuel(float distance)
    {
        return distance>2000?2200:distance>1000?1100:500;
    }
    public:
    void feedinfo()
    {
        cout<<"Enter you flight no:-";
        cin>>flight;
        cout<<"Enter you Flight Destination:-";
        //getline(cin, destination);
        cin>>destination;
        //gets>>destination;
        cout<<"Enter you Flight Distance:-";
        cin>>distance;
        fuel=calfuel(distance);

    }
    void showinfo()
    {
        cout<<"Flight No:-"<<flight<<endl;
        cout<<"Destination:-"<<destination<<endl;
        cout<<"Distance:-"<<distance<<endl;
        cout<<"fuel:-"<<fuel<<endl;
        
    }


};


int main()
{
    class Flight f;
    f.feedinfo();
    f.showinfo();

    return 0;
}
