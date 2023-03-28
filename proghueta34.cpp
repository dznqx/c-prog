#include <iostream>

template <typename T, size_t N>
void SoryAggau(T (&A)[N], T (&B)[N]) {
    for (size_t i = 0; i < N; i++) {
        B[i] = A[i];
    }
}

template <typename T, size_t N>
void Print(const T (&arr)[N]) {
    for (size_t i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[5];

    SoryAggau(A, B);
    Print(B); // выводит: 1 2 3 4 5

    return 0;
}
