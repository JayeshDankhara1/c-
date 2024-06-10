#include<iostream>
using namespace std;

class cal {
private:
    int a, b, total;
public:
    cal(int x, int y) {
        a = x;
        b = y;
    }
    void display() {
        cout << "Addition: " << total << endl;
    }
    friend void add(cal &c);
    friend cal operator+(cal &x,cal &y); 
};

void add(cal &c) {
    c.total = c.a + c.b;
}

cal operator+(cal &x,cal &y) {
    cal w(x.a + y.a, x.b + y.b);
    return w;
}

int main() {
    cal x(11, 12);
    cal y(13, 14);
    cal z = x + y; 
    add(x);
    add(y);
    add(z);
    x.display();
    y.display();
    z.display();
    return 0;
}
