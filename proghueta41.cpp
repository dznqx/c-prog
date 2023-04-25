#include <iostream>
#include <list>
#include <queue>
#include <stack>

using namespace std;

int main(){
    // Создание списка целых чисел
    list<int> myList = {1, -2, 3, -4, 5, -6, 7, -8, 9};

    // Подсчет количества отрицательных элементов
    int negativeCount = 0;
    for (auto it = myList.begin(); it != myList.end(); it++) {
        if (*it < 0) {
            negativeCount++;
        }
    }

    // Создание нового списка из отрицательных элементов с использованием стека и очереди
    stack<int> negativeStack;
    queue<int> negativeQueue;
    for (auto it = myList.begin(); it != myList.end(); it++) {
        if (*it < 0) {
            negativeStack.push(*it);
            negativeQueue.push(*it);
        }
    }

    // Вывод результатов
    cout << "Количество отрицательных элементов: " << negativeCount << endl;
    cout << "Отрицательные элементы в стеке: ";
    while (!negativeStack.empty()) {
        cout << negativeStack.top() << " ";
        negativeStack.pop();
    }
    cout << endl;
    cout << "Отрицательные элементы в очереди: ";
    while (!negativeQueue.empty()) {
        cout << negativeQueue.front() << " ";
        negativeQueue.pop();
    }
    cout << endl;

    return 0;
}
