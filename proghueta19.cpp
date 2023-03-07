#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
// Открытие файла для чтения
    ifstream input_file("input.txt");
    if (!input_file) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    // Открытие файла для записи
    std::ofstream output_file("output.txt");
    if (!output_file) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string line;
    while (std::getline(input_file, line)) {
// Получение длины строкиs
        int length = line.length();
// Добавление длины строки в конец строки
        line += " " + to_string(length);
// Запись строки в выходной файл    
        output_file << line << endl;
    }

// Закрытие файлов
    input_file.close();
    output_file.close();
    cin.get();cin.get();
    return 0;
}
