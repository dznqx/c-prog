#include <algorithm>

int Max(int a, int b, int c) {
    return std::max(std::max(a, b), c);
}

float Max(float a, float b, float c) {
    return std::max(std::max(a, b), c);
}
int a = 10, b = 20, c = 30;
float x = 1.5f, y = 2.5f, z = 3.5f;

int max_int = Max(a, b, c);         // Возвращает 30
float max_float = Max(x, y, z);     // Возвращает 3.5f
