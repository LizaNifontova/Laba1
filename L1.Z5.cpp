#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(0));
    const int size = 5;
    int a[size][size];

    setlocale(LC_ALL, "rus");
    cout << "Матрица: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << setw(5) << (a[i][j] = rand() % 25 - 5);
        cout << endl;
    }

    for (int i = 0; i < size; i++) {
        int im = i;
        int jm = 0;
        for (int j = 0; j < size; j++)
            if (a[i][j] > a[im][jm]) {
                im = i;
                jm = j;
            }
        int t = a[i][i];
        a[i][i] = a[im][jm];
        a[im][jm] = t;
    }

    cout << "Конечная матрица: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
