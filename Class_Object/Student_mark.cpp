#include<iostream>
using namespace std;

class Student3{
private:
    int roll_no;
    string name;
    int sub[5];
    int total;
    float par;
    float cal_par(int total);
    int cal_total();
public:
    Student3(){
        cout<<"Enter Your Roll No: ";
        cin>>roll_no;
        cout<<"Enter Your Name: ";
        cin>>name;
        for(int i=0; i<5; i++){
            cout<<"Enter Your Subject "<<i+1<<" Mark: ";
            cin>>sub[i];
        }
        total = cal_total();
        par = cal_par(total);
    }
    friend void display(Student3 &s);
};

float Student3::cal_par(int total){
    return total / 5.0; 
}

int Student3::cal_total(){
    int t = 0;
    for(int i=0; i<5; i++){
        t += sub[i];
    }
    return t;
}

void display(Student3 &s){
    cout<<"Roll No: "<<s.roll_no<<endl;
    cout<<"Name: "<<s.name<<endl;
    for(int i=0; i<5 ; i++){
        cout<<"Subject "<<i+1<<" Mark: "<<s.sub[i]<<endl;
    }
    cout<<"Total: "<<s.total<<endl;
    cout<<"Percentage: "<<s.par<<endl; 
}

int main(){
    Student3 s;
    display(s);   
    return 0;
}
