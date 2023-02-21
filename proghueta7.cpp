//новый номер//
#include <iostream>

using namespace std;

int main(){
    int n;
    double sum,x;
    sum = 0;
    cin >> n;
    for (double i=1;i<=n;i++){
        x = (1 / i);
        sum += x;
    }
    cout << sum << endl;    
}