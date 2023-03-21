#include <iostream>
#include <algorithm>

template<typename T>
bool compare_desc(T a, T b) {
    return a > b;
}

template<typename T>
void sort_desc(T arr[], int size) {
    std::sort(arr, arr + size, compare_desc<T>);
}

int main() {
    int arr_int[] = { 5, 3, 8, 1, 7 };
    double arr_double[] = { 3.14, 2.72, 1.41, 1.73, 0.01 };

    int size_int = sizeof(arr_int) / sizeof(arr_int[0]);
    int size_double = sizeof(arr_double) / sizeof(arr_double[0]);

    std::cout << "Before sorting:" << std::endl;
    for (int i = 0; i < size_int; i++) {
        std::cout << arr_int[i] << " ";
    }
    std::cout << std::endl;
    sort_desc(arr_int, size_int);
    std::cout << "After sorting:" << std::endl;
    for (int i = 0; i < size_int; i++) {
        std::cout << arr_int[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Before sorting:" << std::endl;
    for (int i = 0; i < size_double; i++) {
        std::cout << arr_double[i] << " ";
    }
    std::cout << std::endl;
    sort_desc(arr_double, size_double);
    std::cout << "After sorting:" << std::endl;
    for (int i = 0; i < size_double; i++) {
        std::cout << arr_double[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
