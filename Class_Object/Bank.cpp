#include<iostream>
using namespace std;
class Cust_info {
    protected:
    string cust_name;
    long int cust_account_no;
    double balence;
    long int cust_mobil_no;
    Cust_info()
    {
        cout<<"Wlcome To Open Bank Acount Plz shear you Detail."<<endl;
        cout<<"Enter You Name:-"<<endl;
        cin>>cust_name;
        cout<<"Enter You Mobile No:-"<<endl;
        cin>>cust_mobil_no;
        cust_account_no=1;
        balence=0;
    }

};

class ATM : protected Cust_info {
    public:
    void Withdrawal(){}
    double Balence_info(){}
};
class CDM : public ATM {
    public:
    void Diposite(){}
};
class Bank : public CDM {
    public:
    Bank()
    {

    }


};
int main()
{
    CDM b;
    return 0;
}