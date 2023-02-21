//новый номер//
#include <iostream>

using namespace std;

int main(){
    int n,sum,x;
    sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++){
        x = i * i;
        sum += x;
    }
    cout << sum << endl;
}