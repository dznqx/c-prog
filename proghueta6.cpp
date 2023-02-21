//вторая новая задача//
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    double sum,x;
    sum = 0;
    cin >> n;
    for (int i=1;i<=n;i++){
        x = sqrt(i);
        sum += x;
    }
    cout << sum << endl;    
}