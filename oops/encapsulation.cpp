#include <iostream>
using namespace std;

class Complex {
private:
    int a, b;

public:
    void setnum(int x, int y) {
        a = x;
        b = y;
    }

    int getnum() {
        return a;
    }

    int getnum1() {
        return b;
    }
};

int main() {
    Complex number;

    number.setnum(5, 6);

    cout << "First number: " << number.getnum() << endl;
    cout << "Second number: " << number.getnum1() << endl;

    return 0;
}