#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    int a, b, c;

public:
    Triangle(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void print() {
        std::cout << "Triangle sides: " << a << ", " << b << ", " << c << std::endl;
    }

    int perimeter() {
        return a + b + c;
    }

    double area() {
        double p = (double)(a + b + c) / 2.0;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }

    bool exists() {
        return (a + b > c) && (b + c > a) && (c + a > b);
    }

    bool operator==(const Triangle& other) {
        return (a == other.a) && (b == other.b) && (c == other.c);
    }
};

int main() {
    int x,y,z,x1,y1,z1;
    cin >> x >> y >> z;
    Triangle t(x,y,z);
    t.print(); // Triangle sides: 3, 4, 5
    cout << "Perimeter: " << t.perimeter() << endl; // Perimeter: 12
    cout << "Area: " << t.area() << endl; // Area: 6
    cout << "Exists: " << t.exists() << endl; // Exists: 1
    cin >> x1 >> y1 >> z1;
    Triangle t2(x1, y1, z1);
    cout << "t == t2: " << (t == t2) << endl; // t == t2: 0
    return 0;
}
