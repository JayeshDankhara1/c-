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
    long long int Return_Acount()
    {   
        return cust_account_no;
    }

    void Withdrawal(){
        int b,c,p;
        cout<<"Enter You Debite Amount:-";
        cin>>b;
        cout<<"Enter you Pin:-";
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
        cout<<"Enter You Crdite Amount:-";
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
class Bank : public CDM 
{
    public:
    Bank(int a)
    {
        cust_name="jayesh";
        cust_mobil_no=9924553324;
        cust_account_no=33800599101;
        pin=1111;
        balence=1000;
        
    }
    Bank()
    {
        cout<<"Enter You Name:-";
        cin>>cust_name;
        cout<<"Enter You Mobile No:-";
        cin>>cust_mobil_no;
        cout<<"Enter you Acounte Number:-";
        cin>>cust_account_no;
        cout<<"Enter You Pin:-";
        cin>>pin;
        balence=0;
        cout<<endl;
    }
    
    void Tanfar(Bank &M){
    
          Withdrawal();
        M.Diposite();
        M.Balence_info();
    }


};
int main()
{
    Bank b[3];
    //b.Acount_Detail();
    int choice;
      
        long long int ac,ac1;
        int i=0,j=4;
        //do{
        Re:
        cout<<endl<<endl<<"Enter You Account Number:-";
        cin>>ac;
        for(i=0;i<3;i++)
        {
            ac1=b[i].Return_Acount();
            if(ac1==ac)
            {
                j=i;
                b[i].Acount_Detail();
            }
        }
        if(j>3)
        {
            cout<<"You Acount Number Is Not Valid";
            goto Re;
        }

        //}while(j<3 );
    do
    {    
        cout <<"======Options==========="<<endl;
        cout <<"1. Deposit : "<<endl;
        cout <<"2. Withdraw : "<<endl;
        cout <<"3. Display Balance : "<<endl;
        cout <<"4. Tranfar : "<<endl;
        cout <<"5. Exit : "<<endl;
        cout <<"Enter Your Choice : ";
        
        
        cin >> choice;

        switch (choice)
        {
            case 1 : 
                b[j].Diposite();
                break;

            case 2 : 
                b[j].Withdrawal();
                break;
            
            case 3 :
                b[j].Balence_info();
                break;
            case 4 :
                {
                    int l,k=4;
                    Re1:
                    cout<<endl<<endl<<"Enter You Reciver Account Number:-";
                    cin>>ac;
                    for(l=0;l<3;l++)
                    {
                        ac1=b[l].Return_Acount();
                        if(ac1==ac)
                        {
                        k=l;
                        cout<<"Reciver Acount Detail";
                        b[l].Acount_Detail();
                        }
                    }        
                    if(k>3)
                    {
                    cout<<"You Acount Number Is Not Valid";
                    goto Re1;
                    }
                    cout<<"L is: "<<l<<endl;
                    // b[j].Tanfar(b[j]);
                    b[j].Tanfar(b[l]);
                break;
                }
                
            case 5 :
                cout <<"Exiting Program Thank You Visit Again : " ;
                goto End;

            default:
                cout <<"You Enter Wrong Choice ! ";
                break;
        }
    }  while(choice < 5);
 
   End: 
   return 0;
}