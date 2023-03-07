#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    // Открываем файл для чтения
    ifstream in_file("input.txt");

    // Создаем вектор для хранения символов
    vector<char> chars;

    // Считываем символы из файла в вектор
    char c;
    while (in_file >> c) {
        chars.push_back(c);
    }

    // Закрываем файл для чтения
    in_file.close();

    // Открываем файл для записи
    ofstream out_file("output.txt");

    // Записываем символы в обратном порядке
    for (int i = chars.size() - 1; i >= 0; i--) {
        out_file << chars[i];
    }

    // Закрываем файл для записи
    out_file.close();

    // Выводим сообщение об успешном выполнении программы
    cout << "Символы успешно записаны в новый файл в обратном порядке!" << endl;

    return 0;
}
