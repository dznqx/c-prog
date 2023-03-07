#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cout << "Введите n: ";
    cin >> n;

    ofstream file("numbers.dat", ios::binary); // создание бинарного файла

    for(int i = 1; i <= n; i++) {
        int square = i * i; // вычисление квадрата числа
        file.write((char*)&square, sizeof(square)); // запись в файл
    }

    file.close();

    ifstream readfile("numbers.dat", ios::binary); // открытие бинарного файла для чтения

    int number;
    int counter = 1; // счетчик порядковых номеров компонент файла

    while(readfile.read((char*)&number, sizeof(number))) { // чтение компонент файла
        if(counter % 2 == 1) { // проверка на нечетность порядкового номера
            cout << number << " ";
        }
        counter++;
    }

    readfile.close();

    return 0;
}
