#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            count++;
        }
    }

    cout << "Number of uppercase Latin letters: " << count << endl;
    cin.get();
}
