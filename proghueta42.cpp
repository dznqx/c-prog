#include <iostream>
#include <list>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    // Создание списка целых чисел
    list<int> myList = {1, -2, 3, -4, 5, -6, 7, -8, 9};

    // Подсчет количества отрицательных элементов
    int positiveCount = 0;
    for (auto it = myList.begin(); it != myList.end(); it++) {
        if (*it > 0) {
            positiveCount += *it;
        }
    }

    // Создание нового списка из отрицательных элементов с использованием стека и очереди
    stack<int> positiveStack;
    queue<int> positiveQueue;
    for (auto it = myList.begin(); it != myList.end(); it++) {
        if (*it > 0) {
            positiveStack.push(*it);
            positiveQueue.push(*it);
        }
    }

    // Вывод результатов
    cout << "Сумма положительных элементов: " << positiveCount << endl;
    cout << "Положительные элементы в стеке: ";
    while (!positiveStack.empty()) {
        cout << positiveStack.top() << " ";
        positiveStack.pop();
    }
    cout << endl;
    cout << "Положительные элементы в очереди: ";
    while (!positiveQueue.empty()) {
        cout << positiveQueue.front() << " ";
        positiveQueue.pop();
    }
    cout << endl;

    return 0;
}
