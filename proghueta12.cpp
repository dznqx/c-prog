#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Read the input string

    set<char> elements; // Use set to store unique characters in the string

    for (int i = 0; i < str.length(); i++) {
        elements.insert(str[i]); // Insert each character in the set
    }

    int count = elements.size(); // Get the number of unique elements in the set

    cout << "The number of different elements in the string is: " << count << endl;
    cin.get();
}