#include<iostream>
using namespace std;
class Book{
    private:
    int book_no;
    char book_titale[20];
    float price;
    int book_no_of_copy;
    void total_cost(int n);
    public:
    void  input(){
        
        cout<<"Enter you Book No:-";
        cin>>book_no;
        cout<<"Enter you Book Titale:-";
        cin>>book_titale;
        cout<<"Enter you Book Price:-";
        cin>>price;

    }
    void purchege(){
        cout<<"Enter you Book Copy:-";
        cin>>book_no_of_copy;
        total_cost(book_no_of_copy);

    }

};
void Book:: total_cost(int n)
{
    cout<<"Total Cost:-"<<n*price;
}
int main()
{
    class Book b;
    b.input();
    b.purchege();
    return 0;
}