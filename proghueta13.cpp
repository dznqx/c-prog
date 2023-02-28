#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (s[i] == s[j]) {
                cout << s[i] << endl;

            }
        }       
    }
    cout << "No identical letters found." << endl;
    cin.get();
}
