#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("input.txt"); // открытие файла для чтения
    ofstream outFile("output.txt"); // открытие файла для записи

    if (!inFile) { // проверка наличия входного файла
        cerr << "Unable to open input file." << endl;
        return 1;
    }

    if (!outFile) { // проверка наличия выходного файла
        cerr << "Unable to open output file." << endl;
        return 1;
    }

    string line; // строка для чтения из файла

    while (getline(inFile, line)) { // чтение строки из файла
        if (line.length() % 2 == 0) { // проверка на четность длины строки
            outFile << line << endl; // запись строки в выходной файл
        }
    }

    inFile.close(); // закрытие входного файла
    outFile.close(); // закрытие выходного файла

    cin.get();

    return 0;
}
