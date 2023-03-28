#include <iostream>

// функция для определения количества положительных элементов в одномерном массиве
template <typename T>
int countPositive(T* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

// функция для определения количества положительных элементов в двумерном массиве
template <typename T>
int countPositive(T** arr, int rows, int cols) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    // тестирование функций
    int arr1[] = {1, -2, 3, -4, 5};
    std::cout << "Количество положительных элементов в одномерном массиве: "
              << countPositive(arr1, 5) << std::endl;
              
    int** arr2 = new int*[3];
    for (int i = 0; i < 3; i++) {
        arr2[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            arr2[i][j] = i * j;
        }
    }
    std::cout << "Количество положительных элементов в двумерном массиве: "
              << countPositive(arr2, 3, 3) << std::endl;
              
    // освобождение памяти
    for (int i = 0; i < 3; i++) {
        delete[] arr2[i];
    }
    delete[] arr2;
    
    return 0;
}
