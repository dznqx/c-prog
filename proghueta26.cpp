#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cout << "Введите количество членов последовательности Фибоначчи, которое нужно записать: ";
    cin >> n;
    int m;

    // создание и открытие бинарного файла для записи
    ofstream fout("fibonacci.dat", ios::binary);

    // запись первых n членов последовательности Фибоначчи в бинарный файл
    for (int i = 0; i < n; i++) {
        cin >> m;
        fout.write((char*)&m, sizeof(int));
    }
    // закрытие бинарного файла
    fout.close();

    // открытие бинарного файла для чтения
    ifstream fin("fibonacci.dat", ios::binary);

    // вывод на экран всех компонентов файла с порядковым номером не кратным трем
    int x, i = 1;
    while (fin.read((char*)&x, sizeof(int))) {
        if (x % 2 == 0) {
            cout << x << " ";
        }
        i++;
    }
    // закрытие бинарного файла
    fin.close();

    return 0;
}
