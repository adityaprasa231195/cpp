#include <iostream>
using namespace std;

class EquilateralTriangle {
private:
    float a;
    float circumfrence;
    float area;
public:
    void setA(float length) {
        a = length;
        circumfrence = a * 3;
        area = (1.73 * a * a) / 4;
    }

    friend void Printresults(EquilateralTriangle ET);
};


void Printresults(EquilateralTriangle ET) {
    cout << "a = " << ET.a << "\n";
    cout << "circumfrence = " << ET.circumfrence << "\n";
    cout << "area = " << ET.area << "\n";

};


int main() {
    EquilateralTriangle ET;
    ET.setA(3);
    Printresults(ET);
    return 0;
}