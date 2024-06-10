 #include<iostream>
 using namespace std;
 class cal {
    private:
    int a,b,total;
    public:
    cal(int x, int y)
    {
        a=x;
        b=y;
    }
    void dispaly()
    {
        cout<<"Addition:-"<<total<<endl;
    }
    friend void add(cal c); 

 };
 friend void cal::add(cal c){
    c.total=c.a+c.b;
 }  
 int main()
 {
    cal x(11,12);
    add(x);
    x.dispaly();
    return 0;
 }