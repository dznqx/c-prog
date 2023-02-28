#include <iostream>
#include <string>

using namespace std;

void replaceAll(string& str, const string& str1, const string& str2) {
    size_t pos = 0;
    while ((pos = str.find(str1, pos)) != string::npos) {
        str.replace(pos, str1.length(), str2);
        pos += str2.length();
    }
}

int main() {
    string str,str1,str2;
    getline(cin, str);
    getline(cin, str1);
    getline(cin, str2);
    replaceAll(str, str1, str2);
    cout << str << endl;
    cin.get();
}