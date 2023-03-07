#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file1("file1.txt");
    ifstream file2("file2.txt");
    ofstream out("output1.txt");

    int num1, num2;

    // Проверяем, что файлы были успешно открыты
    if (!file1.is_open() || !file2.is_open() || !out.is_open()) {
        cout << "Не удалось открыть один из файлов!" << endl;
        return 1;
    }

    // Читаем из каждого файла число, складываем и записываем в новый файл
    while (file1 >> num1 && file2 >> num2) {
        out << num1 + num2 << endl;
    }

    // Закрываем все файлы
    file1.close();
    file2.close();
    out.close();

    return 0;
}
