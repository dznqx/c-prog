#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Определение структуры данных для хранения информации о студенте
struct Student {
    string firstName;
    string lastName;
    string middleName;
    string groupNumber;
    int exam1;
    int exam2;
    int exam3;
};

int main() {
    // Открытие файлов для чтения и записи
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    // Проверка, удалось ли открыть файлы
    if (!inputFile.is_open()) {
        cout << "Error opening input file" << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cout << "Error opening output file" << endl;
        return 1;
    }

    // Объявление переменной для хранения информации о текущем студенте
    Student currentStudent;

    // Чтение информации о студентах из входного файла и запись информации о студентах, успешно сдавших сессию, в выходной файл
    while (inputFile >> currentStudent.firstName >> currentStudent.lastName >> currentStudent.middleName >> currentStudent.groupNumber >> currentStudent.exam1 >> currentStudent.exam2 >> currentStudent.exam3) {
        int sum = currentStudent.exam1 + currentStudent.exam2 + currentStudent.exam3;
        if (sum >= 9) {
            outputFile << currentStudent.firstName << " " << currentStudent.lastName << " " << currentStudent.middleName << " " << currentStudent.groupNumber  << endl;
        }
    }

    // Закрытие файлов
    inputFile.close();
    outputFile.close();

    return 0;
}
