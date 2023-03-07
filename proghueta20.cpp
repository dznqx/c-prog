#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input("input.txt"); // открываем исходный файл для чтения
    ofstream output("output.txt"); // открываем новый файл для записи
    int length;
    cout << "Введите длину строк: ";
    cin >> length; // считываем заданную длину строк

    string line;
    while (getline(input, line)) { // считываем строки из исходного файла
        if (line.length() > length) { // проверяем длину строки
            output << line << endl; // записываем строку в новый файл
        }
    }
    input.close(); // закрываем исходный файл
    output.close(); // закрываем новый файл

    cin.get();

    return 0;
}
