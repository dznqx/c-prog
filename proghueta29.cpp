#include <cmath>
#include <iostream>

using namespace std;

float Pow(float a, int k, int m) {
    return std::pow(a, static_cast<float>(k) / m);
}

float Pow(float a, int n) {
    return std::pow(a, n);
}

int Pow(int a, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}
int main(){
    float a = 2.0;
    int k = 3;
    int m = 2;
    int n = 4;

    float result1 = Pow(a, k, m);       // Возвращает 2.8284271
    float result2 = Pow(a, n);          // Возвращает 16.0
    int result3 = Pow(2, n);  

    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;

    
    return 0;       // Возвращает 16
}
