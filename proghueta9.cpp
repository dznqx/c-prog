#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    char symbol;
    getline(cin, str);
    cin >> symbol;



    for (int i = 0; i < str.length(); i++) {

        if (str[i] == symbol){
            str.erase(i, 1); 
            i--;
        }
    }
    cout << str << endl;
    cin.get();cin.get();
}