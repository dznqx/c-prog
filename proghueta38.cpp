#include <iostream>
using namespace std;

class Complex {
private:
    double realPart;
    double imaginaryPart;

public:
    Complex(double r = 0, double i = 0) {
        realPart = r;
        imaginaryPart = i;
    }

    void display() {
        cout << realPart << " + " << imaginaryPart << "i" << endl;
    }

    void display1() {
        cout << realPart << " - " << imaginaryPart << "i" << endl;
    }

    Complex conjugate() {
        return Complex(realPart, imaginaryPart);
    }

    bool isEqual(Complex c) {
        return (realPart == c.realPart && imaginaryPart == c.imaginaryPart);
    }

    Complex operator+(Complex c) {
        return Complex(realPart + c.realPart, imaginaryPart + c.imaginaryPart);
    }

    Complex operator-(Complex c) {
        return Complex(realPart - c.realPart, imaginaryPart - c.imaginaryPart);
    }

    Complex operator*(Complex c) {
        return Complex(realPart * c.realPart - imaginaryPart * c.imaginaryPart,
            realPart * c.imaginaryPart + imaginaryPart * c.realPart);
    }

    Complex operator/(Complex c) {
        double denominator = c.realPart * c.realPart + c.imaginaryPart * c.imaginaryPart;
        return Complex((realPart * c.realPart + imaginaryPart * c.imaginaryPart) / denominator,
            (imaginaryPart * c.realPart - realPart * c.imaginaryPart) / denominator);
    }
};

int main() {
    int x,y,x1,y1;
    cin >> x >> y >> x1 >> y1;
    Complex c1(x, y);
    Complex c2(x1, y1);

    cout << "c1 = ";
    c1.display();

    cout << "c2 = ";
    c2.display();

    Complex sum = c1 + c2;
    cout << "c1 + c2 = ";
    sum.display();

    Complex diff = c1 - c2;
    cout << "c1 - c2 = ";
    diff.display();

    Complex prod = c1 * c2;
    cout << "c1 * c2 = ";
    prod.display();

    Complex quot = c1 / c2;
    cout << "c1 / c2 = ";
    quot.display();

    Complex conj = c1.conjugate();
    cout << "Conjugate of c1 = ";
    conj.display1();

    Complex conj1 = c2.conjugate();
    cout << "Conjugate of c2 = ";
    conj1.display1();

    bool isEqual = c1.isEqual(c2);
    cout << "c1 and c2 are " << (isEqual ? "equal" : "not equal") << endl;

    return 0;
}
