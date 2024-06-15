#include<iostream>
using namespace std;
class Cust_info {
    protected:
    string cust_name;
    long long int cust_account_no;
    double balence;
    long long int cust_mobil_no;
    int pin;
 /*   Cust_info()
    {
        cout<<"Wlcome To Open Bank Acount Plz shear you Detail."<<endl;
        cout<<"Enter You Name:-"<<endl;
        cin>>cust_name;
        cout<<"Enter You Mobile No:-"<<endl;
        cin>>cust_mobil_no;
        cout<<"Enter you Acounte Number:-";
        cin>>cust_account_no;
        cout<<"Enter You Pin:-";
        cin>>pin;
        balence=0;
    }*/
    

};

class ATM : protected Cust_info {
    public:
    void Acount_Detail()
    {
        cout<<"Name:-"<<cust_name<<endl;
        cout<<"Mobile No:-"<<cust_mobil_no<<endl;
        cout<<"Acount No:-"<<cust_account_no<<endl;
        cout<<"Balence:-"<<balence<<endl;
    }
    void Withdrawal(){
        int b,c,p;
        cout<<"Enter You Debite Amount:-"<<endl;
        cin>>b;
        cout<<"Enter you Pin:-"<<endl;
        cin>>p;
        c=Balence_Checd();
        if(b<c && b>0 && p==pin)
        {
            balence-=b;
            Balence_info();   
        }else
        {
            cout<<"Invalide Balence Or Invalide Amount OR Invalide Pin\n Enter You Retay"<<endl;
            Withdrawal();
        }
    }
    double Balence_Checd(){
        return balence;
    }
    void Balence_info(){
        cout<<"Balence is:-"<<balence<<endl;
    }
};
class CDM : public ATM {
    public:
    void Diposite(){
        int b;
        cout<<"Enter You Crdite Amount:-"<<endl;
        cin>>b;
        if(b>0)
        {balence+=b;
        Balence_info();
        }
        else{
            cout<<"Invalide Amount ReEnter Amount "<<endl;
            Diposite();

        }

    }
};
class Bank : public CDM {
    public:
    Bank(int a)
    {
        cust_name="jayesh";
        cust_mobil_no=9924553324;
        cust_account_no=33800599101;
        pin=1111;
        balence=1000;
        
    }


};
int main()
{
    Bank b(1);
    b.Acount_Detail();
    int choice;
    do
    {
        cout <<endl << "Options : "<<endl;
        cout <<"1. Deposit : "<<endl;
        cout <<"2. Withdraw : "<<endl;
        cout <<"3. Display Balance : "<<endl;
        cout <<"4. Exit : "<<endl;
        cout <<"Enter Your Choice : ";

        
        cin >> choice;

        switch (choice)
        {
        case 1 : 
            b.Diposite();
            break;

        case 2 : 
            b.Withdrawal();
            break;
        
        case 3 :
            b.Balence_info();
            break;

        case 4 :
            cout <<"Exiting Program Thank You Visit Again : " ;
            return 0;

        default:
            cout <<"You Enter Wrong Choice ! ";
            break;
        }
    }  
    while(choice < 4);
 

   return 0;
}