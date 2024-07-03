#include<iostream>
using namespace std;
class Hotel
{
    string Name;
    long long Mobile_no;
    string Discriptin[50];
    int Rate[50];
    int Qty[50];
    int Amount[50];
    int Total_Amount;
    float Sgst;
    float Cgst;
    float Discount;
    int Final_Amount;
    float Discount_cal(int Amount_limit,float Discount_Rate);
    
    public:
    void Final(int Index);
    void showdetail(int Lindex);
    void setuserinfo(string Name, long long int Mobile_no);
    void setdetail(int Index,string Discriptin,int Rate,int Qty);
};

class Menu  {
    int Cold();
    int Sapati();
    int Punjabi_sabji();
    int Piza();
    int Supe();
    
    public:
    string Description (int index);
    int Rate(int index);
    int print(int ch);
    int show();
    int setqty();
};
void Hotel:: setuserinfo(string Name, long long int Mobile_no)
{   
    this->Name=Name;
    this->Mobile_no=Mobile_no;

}
void Hotel:: setdetail(int Index,string Discriptin,int Rate,int Qty)
{
    this->Discriptin[Index]=Discriptin;
    this->Rate[Index]=Rate;
    this->Qty[Index]=Qty;
    this->Amount[Index]=Rate*Qty;
}
void Hotel:: Final(int Index)
{   int Amount=0;
    for(int i=0;i<Index;i++)
    {
       Amount+=this->Amount[i];
    }
    Total_Amount=Amount;
    Sgst=0.025*Total_Amount;
    Cgst=0.025*Total_Amount;
    Discount=Discount_cal(5000,0.05);
    Final_Amount=Total_Amount-Sgst-Cgst-Discount;
}
float Hotel:: Discount_cal(int Amount_limit,float Discount_Rate)
{
    if(Total_Amount>Amount_limit)
    {
        return Total_Amount*Discount_Rate;
    }
    return 0;
}
void Hotel:: showdetail(int Lindex)
{
    system("cls");
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                  Bill Recipt                       "<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Custumber Name:-"<<Name<<endl;
    cout<<"Custumber Mobile Number:-"<<Mobile_no<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Discription                     Rate\tQty   Amount"<<endl;
    cout<<"----------------------------------------------------"<<endl;
    for(int i=0; i<Lindex; i++){
    cout<<Discriptin[i];
    cout<<Rate[i]<<"\t" ;
    cout<<Qty[i]<<"\t";
    cout<<Amount[i]<<endl;
    }
    cout<<"----------------------------------------------------"<<endl;
    cout<<"\t\t\tTotal Amount:-          "<<Total_Amount<<endl;
    cout<<"\t\t\tSGSt Amount(2.5%):-     "<<Sgst<<endl;
    cout<<"\t\t\tCGSt Amount(2.5%):-     "<<Cgst<<endl;
    cout<<"\t\t\tDiscount Amount:-       "<<Discount<<endl;
    cout<<"\t\t\tNet Amount:-            "<<Final_Amount<<endl;
    cout<<"----------------------------------------------------"<<endl;
    cout<<"                   Thank You                        "<<endl;
    cout<<"----------------------------------------------------"<<endl;
}

int Menu:: setqty()
{   int q;
    cout<<"Enter You Qty:-";
    cin>>q;
    return q;
}
int Menu:: show()
{   int ch;
    Re4:
    cout<<"1. Supe"<<endl;
    cout<<"2. Piza"<<endl;
    cout<<"3. Punjbi Sabji"<<endl;
    cout<<"4. Sapati"<<endl;
    cout<<"5. cold"<<endl;
    cout<<"Enter You select :-";
    cin>>ch;
    if(ch>=1 && ch <=5){
    return ch;
    }
    cout<<"Invalid"<<endl;
    goto Re4;

}
    
int Menu:: print(int ch)
{
switch (ch)
{   case 1:
    return Supe()+10;
    break;
case 2:
    return Piza()+20;
    break;
case 3:
    return Punjabi_sabji()+30;
    break;
case 4:
    return Sapati()+40;
    break;
case 5 :
    return Cold()+50;
    break;
}

}
int  Menu:: Supe()
{   int r;
    Re5:
    cout<<"1. Mancou"<<endl;
    cout<<"2. Toneto"<<endl;
    cout<<"3. Vagitabal corn"<<endl;
    cout<<"4. Noodels"<<endl;
    cout<<"Enter you Book Odar:-";
    cin>>r;
    if(r>0 && r<5){
    return r;
    }
    cout<<"invalide"<<endl;
    goto Re5;
}
int  Menu:: Piza()
{   int r;
    Re6:
    cout<<"1. Schezwan Margherita."<<endl;
    cout<<"2. Mazedar Makhni Paneer."<<endl;
    cout<<"3. Awesome American Cheesy."<<endl;
    cout<<"4. Ultimate Tandoori Veggie."<<endl;
    cout<<"Enter you Book Odar:-";
    cin>>r;
    if(r>0 && r<5){
    return r;
    }
    cout<<"invalide"<<endl;
    goto Re6;
}
int  Menu:: Punjabi_sabji()
{   int r;
    Re7:
    cout<<"1. Paneer Butter Masala."<<endl;
    cout<<"2. kajuKari."<<endl;
    cout<<"3. Paneer Tufani."<<endl;
    cout<<"4. Kaju Butter Masala."<<endl;
    cout<<"Enter you Book Odar:-";
    cin>>r;
    if(r>0 && r<5){
    return r;
    }
    cout<<"invalide"<<endl;
    goto Re7;
}

int Menu:: Sapati()
{   int r;
    Re8:
    cout<<"1. Butter Nan"<<endl;
    cout<<"2. Nan"<<endl;
    cout<<"3. Sapati"<<endl;
    cout<<"4. Butter Sapati"<<endl;
    cout<<"Enter you Book Odar:-";
    cin>>r;
    if(r>0 && r<5){
    return r;
    }
    cout<<"invalide"<<endl;
    goto Re8;
}
int  Menu:: Cold()
{   int r;
    Re9:
    cout<<"1. ButerMilk"<<endl;
    cout<<"2. Slice"<<endl;
    cout<<"3. Sprite"<<endl;
    cout<<"4. 7up"<<endl;
    cout<<"Enter you Book Odar:-";
    cin>>r;
    if(r>0 && r<5){
    return r;
    }
    cout<<"invalide"<<endl;
    goto Re9;
}
int  Menu:: Rate(int index)
{
    
     switch (index)
    {
    case 11:
        return 50;
        break;
    case 12:
        return 45;
        break;
    case 13:
        return 55;
        break;
    case 14:
        return 47;
        break;
    case 21:
        return 200;
        break;
    case 22:
        return 159;
        break;
    case 23:
        return 170;
        break;
    case 24:
        return 130;
        break;
    case 31:
        return 140;
        break;
    case 32:
        return 120;
        break;
    case 33:
        return 130;
        break;
    case 34:
        return 160;
        break;
    case 41:
        return 40;
        break;
    case 42:
        return 30;
        break;
    case 43:
        return 15;
        break;
    case 44:
        return 20;
        break;
    case 51:
        return 20;
        break;
    case 52:
        return 15;
        break;
    case 53:
        return 15;
        break;
    case 54:
        return 15;
        break;
    }
}
string  Menu:: Description (int index)
{   
    switch (index){
    case 11:
        return "Mancou Supe                     ";
        break;
    case 12:
        return "Toneto Supe                     ";
        break;
    case 13:
        return "Vagitabal corn Supe             ";
        break;
    case 14:
        return "Noodels Supe                    ";
        break;
    case 21:
        return "Schezwan Margherita Piza        " ;
        break;
    case 22:
        return "Mazedar Makhni Paneer Piza      ";
        break;
    case 23:
        return "Awesome American Cheesy Piza    ";
        break;
    case 24:
        return "Ultimate Tandoori Veggie Piza   ";
        break;   
    case 31:
        return "Paneer Butter Masala Sabji      ";
        break;
    case 32:
        return "kajuKari Sabji                  ";
        break;
    case 33:
        return "Paneer Tufani Sabji             ";
        break;
    case 34:
        return "Kaju Butter Masala Sabji        ";
        break;
    case 41:
        return "Butter Nan                      ";
        break;
    case 42:
        return "Plain Nan                       ";
        break;
    case 43:
        return "Palin Sapati                    ";
        break;
    case 44:
        return "Butter Sapati                   ";
        break;
    case 51:
        return "Butter Milk                     ";
        break;
    case 52:
        return "Slice                           ";
        break;
    case 53:
        return "Sprite                          ";
        break;
    case 54:
        return "7 up                            ";
        break;
    }   
}
   

int main()

{   
    int index=0,ch;
    string name;
    cout<<"Enter you Name:-";
    cin>>name;
    long long int No;
    cout<<"Enter you Mobile No:-";
    cin>>No;
    Hotel h;
    h.setuserinfo(name,No);
    Menu m;
    do{
    Re2:
    int j=m.show();
    Re1:
    int k=m.print(j);
    h.setdetail(index,m.Description(k),m.Rate(k),m.setqty());
    index++;
    Re:
    cout<<"Enter you This More Odar Press 1 And \nBack To Main Manu Press 2 \nConform Odar 9"<<endl;
    cin>>ch;
    if(ch==1)
    {
        goto Re1;
    }
    else if(ch==2)
    {
        goto Re2;
    }
    else {
        if(ch==9)
        {
        h.Final(index);
        goto  Re3;
        }
        cout<<"invalide Selection"<<endl;
        goto Re;
    }

    }while(ch==9);
    Re3:
    h.showdetail(index);   
}