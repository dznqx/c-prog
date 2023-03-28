#include <iostream>

template <typename T, typename U>
int find_index(T* arr, U value, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    double arr2[] = {2.5, 3.6, 1.2, 6.7, 8.9};
    char arr3[] = {'a', 'b', 'c', 'd', 'e'};
    std::string arr4[] = {"apple", "banana", "orange", "pear", "kiwi"};

    int value1 = 4;
    double value2 = 1.2;
    char value3 = 'c';
    std::string value4 = "pear";

    std::cout << "Index of " << value1 << " in arr1: " << find_index(arr1, value1, 5) << std::endl;
    std::cout << "Index of " << value2 << " in arr2: " << find_index(arr2, value2, 5) << std::endl;
    std::cout << "Index of " << value3 << " in arr3: " << find_index(arr3, value3, 5) << std::endl;
    std::cout << "Index of " << value4 << " in arr4: " << find_index(arr4, value4, 5) << std::endl;

    return 0;
}
