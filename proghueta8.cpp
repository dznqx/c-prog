#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    const int a = -40;
    const int b = 40;
    int n;
    cin >> n;
    int v[n][n];
    int sum = 0;
    double arf;
    int y = 0;
    int q;
    int *o = new int[q];
    //Ввод элементов
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            v[i][j] = (random()*(b - a + 1) / RAND_MAX + a);
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
        cout << y << endl;
        cout << sum << endl;
        arf = sum / y;
        cout << arf << endl;
        //delete[]//























        cout << "над главной диагональю" << "  1.667" << endl;
}