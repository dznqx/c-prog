#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество членов последовательности Фибоначчи, которое нужно записать: ";
    cin >> n;

    // создание и открытие бинарного файла для записи
    ofstream fout("fibonacci.dat", ios::binary);

    // запись первых n членов последовательности Фибоначчи в бинарный файл
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        fout.write((char*)&b, sizeof(int));
        int temp = b;
        b = a + b;
        a = temp;
    }

    // закрытие бинарного файла
    fout.close();

    // открытие бинарного файла для чтения
    ifstream fin("fibonacci.dat", ios::binary);

    // вывод на экран всех компонентов файла с порядковым номером не кратным трем
    int x, i = 1;
    while (fin.read((char*)&x, sizeof(int))) {
        if (i % 3 != 0) {
            cout << x << " ";
        }
        i++;
    }

    // закрытие бинарного файла
    fin.close();

    return 0;
}
