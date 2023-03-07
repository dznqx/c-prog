#include <iostream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a = 1;
    int b, c;
    cout << "Enter two numbers a and b: ";
    cin >>  b;
    cout << "Last prime number before A:= " << b << " are: ";
    for (int i = a; i < b; i++) {
        if (is_prime(i)) {
            c = i;
        }
    }
    cout << c << " ";
    cout << endl;
    cin.get();cin.get();
}
