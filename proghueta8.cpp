#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    const int a = -40;
    const int b = 40;
    int n,m,q,y;
    cin >> n;
    cin >> m;
    double sum,sum1,z,l,arf = 0;
    int **v = new int* [n];
    //Ввод элементов
    for (int i=0; i<n; i++){
        v[i] = new int[m];
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            v[i][j] = (rand()*(b - a + 1) / RAND_MAX + a);
        }
    }
    cout << endl;

    for (int i=0;i<n;i++)
        {   
            for (int j=0;j<n;j++)
            {
                cout << v[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < m; j++){
                if(v[i][j] % 2 != 0){
                    l += 1;
                    sum1 = sum1 + v[i][j];
                }
            }
        }
        cout << endl;

        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++){
                if(i == j){
                    if(v[i][j]%2==0){
                        y +=1;
                        sum = sum + v[i][j];
                    }
                }
            }
        }
        z = (sum1 / l);
        cout << "Vishe glavnoi diagonali:" <<  z << endl;
        arf = (sum / y);
        cout << "Po glavnoi diagonali" << arf << endl;
        cin.get();cin.get();
}