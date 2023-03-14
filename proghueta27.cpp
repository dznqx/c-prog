#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string surname;
    string name;
    string patronymic;
    int birth_year;
    string address;
    int school_grad_year;
};

int main() {
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");

    int num_students;
    input_file >> num_students;

    Student students[num_students];

    for (int i = 0; i < num_students; i++) {
        input_file >> students[i].surname >> students[i].name >> students[i].patronymic >> students[i].birth_year >> students[i].address >> students[i].school_grad_year;
    }

    for (int i = 0; i < num_students; i++) {
        if (students[i].school_grad_year != 2023) {
            output_file << students[i].surname << " " << students[i].name << " " << students[i].patronymic << " " << students[i].birth_year << " " << students[i].address << " " << students[i].school_grad_year << endl;
        }
    }

    input_file.close();
    output_file.close();

    return 0;
}
