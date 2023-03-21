#include <iostream>

template<typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int a = 3, b = 5;
    std::cout << "Максимальное из " << a << " и " << b << " : " << max(a, b) << std::endl;

    double c = 2.5, d = 7.8;
    std::cout << "Максимальное из " << c << " и " << d << " : " << max(c, d) << std::endl;

    char e = 'a', f = 'z';
    std::cout << "Максимальное из " << e << " и " << f << " : " << max(e, f) << std::endl;

    return 0;
}
