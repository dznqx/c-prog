#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

// Read input strings
    cout << "Enter string 1: ";
    getline(cin, str1);
    cout << "Enter string 2: ";
    getline(cin, str2);

// Remove all occurrences of str1 from str2
    size_t pos = str2.find(str1);
    while (pos != string::npos) {
        str2.erase(pos, str1.length());
        pos = str2.find(str1);
    }

// Print the result
    cout << "Result: " << str2 << endl;
    cin.get();cin.get();
}