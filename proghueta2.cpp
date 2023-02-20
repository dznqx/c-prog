#include <iostream>
#include <cmath>
using namespace std;


int main(){
    double d;
    int a,b,c;
    cin >> a >> b >> c;
    cout.precision(3);
    d = b*b - 4*a*c;
    if(d<0){
        cout << "ne robit"<< "\n";
    }
    if(d>0){
        cout << (-b+sqrt(d))/(2*a) << "\n";
        cout << (-b-sqrt(d))/(2*a) << "\n";
    }
    if(d==0){
        cout << -b/(2*a) << "\n";
    }

}