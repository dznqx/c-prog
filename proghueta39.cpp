#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Figure {
public:
    virtual double Perimeter() = 0;
    virtual double Area() = 0;
    virtual void Info() = 0;
};

class Rectangle : public Figure {
private:
    double width, height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double Perimeter() {
        return 2 * (width + height);
    }
    double Area() {
        return width * height;
    }
    void Info() {
        cout << "Rectangle: width = " << width << ", height = " << height << ", perimeter = " << Perimeter() << ", area = " << Area() << endl;
    }
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double Perimeter() {
        return 2 * M_PI * radius;
    }
    double Area() {
        return M_PI * radius * radius;
    }
    void Info() {
        cout << "Circle: radius = " << radius << ", perimeter = " << Perimeter() << ", area = " << Area() << endl;
    }
};

class Triangle : public Figure {
private:
    double a, b, c;
public:
    Triangle(double s1, double s2, double s3) {
        a = s1;
        b = s2;
        c = s3;
    }
    double Perimeter() {
        return a + b + c;
    }
    double Area() {
        double p = Perimeter() / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    void Info() {
        cout << "Triangle: sides = " << a << ", " << b << ", " << c << ", perimeter = " << Perimeter() << ", area = " << Area() << endl;
    }
};

int main() {
    const int n = 3;
    Figure* fig[n];
    fig[0] = new Rectangle(3, 10);
    fig[1] = new Circle(4);
    fig[2] = new Triangle(3, 4, 5);
    for (int i = 0; i < n; i++) {
        fig[i]->Info();
        delete fig[i];
    }
    return 0;
}
