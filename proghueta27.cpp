#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Student {
    string surname;
    string name;
    string patronymic;
    int birth_year;
    string address;
    string school_number;
};

int main() {
    ifstream input_file("input1.txt");
    if (!input_file.is_open()) {
        cout << "Unable to open input file!" << endl;
        return 1;
    }

    vector<Student> students;
    string surname, name, patronymic, address,school_number;
    int birth_year;

    // Read data from input file and create list of students
    while (input_file >> surname >> name >> patronymic >> birth_year >> address >> school_number) {
        Student student = {surname, name, patronymic, birth_year, address, school_number};
        students.push_back(student);
    }

    // Create new file for output
    ofstream output_file("output.txt");
    if (!output_file.is_open()) {
        cout << "Unable to open output file!" << endl;
        return 1;
    }

    // Write list of students to output file, excluding those who finished school in 2023
    for (Student student : students) {
        if (student.birth_year != 2005) {
            output_file << student.surname << " " << student.name << " " << student.patronymic
                        << " " << student.birth_year << " " << student.address << " " << student.school_number << endl;
        }
    }

    return 0;
}
