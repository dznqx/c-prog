#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double x = 1.0;
    cout.precision(4);
    cout.fill('0'); 
    cout << " x       sqrt(x)      x^2\n\n"; 
 
    while (x<=8.5){
        cout.width(8); 
		cout << x << " "; 
		cout.width(8); 
		cout << sqrt(x) << " "; 
		cout.width(8); 
		cout << x*x << '\n'; 
        x += 1.5;
    }
    cin.get();cin.get();
}