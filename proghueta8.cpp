#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main(){
    setlocale(0," ");
    const int a = -40;
    const int b = 40;
    int n,m;
    cin >> n;
    cin >> m;
    double sum = 0;
    double sum1 = 0;
    double z = 0;
    double l = 0;
    double arf;
    int y = 0;
    int q;
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
        cout << z << endl;
        arf = (sum / y);
        cout << arf << endl;

        cin.get();cin.get();
}