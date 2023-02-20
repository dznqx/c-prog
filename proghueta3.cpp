#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    const int a = -40;
    const int b = 40;
    int m,n;
    cin >> m;
    cin >> n;
    int v[m][n];
    int max = -1000;
    //Ввод элементов
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            v[i][j] = (rand()*(b - a + 1) / RAND_MAX + a);
        }
    }
    cout << endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if ( v[i][j] > max){
                max = v[i][j];
            }
        }
    
    }
    //Вывод элементов
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << v[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Max:" << "";
    cout << max << endl; 
    
    cin.get();cin.get();
}