
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 1;
    const int size = 6;
    int a[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                a[i][j] = num;
                num++;
            }
        }
    }

    int ii = size - 1;
    while (ii == size - 1)
    {
        for (int j = size - 2; j >= 0; j--)
        {
            if (j != 0)
            {
                a[ii][j] = num;
                num++;
            }
            else
            {
                a[ii][j] = num;
                num++;
                ii--;
            }
        }
    }

    for (int i = size - 2; i >= 1; i--)
    {
        for (int j = 0; j != 1; j++)
        {
            if (j != 1)
            {
                a[i][j] = num;
                num++;
            }
        }
    }

    for (int i = 2; i < size - 1; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            if (i - 1 == j)
            {
                a[i][j] = num;
                num++;
            }
        }
    }

    ii = size - 2;
    int b = size - 1;
    while (ii == size - 2)
    {
        for (int j = size - 4; j >= 1; j--)
        {
            if (j != 1)
            {
                a[ii][j] = num;
                num++;
            }
            else
            {
                a[ii][j] = num;
                num++;
                ii--;
            }
        }
    }

    for (int i = size - 3; i >= 1; i--)
    {
        for (int j = 1; j != 2; j++)
        {
            if (j != 2)
            {
                a[i][j] = num;
                num++;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i][j] < 0)
            {
                a[i][j] = 0;
            }
        }
    }

    cout << "Конечная матрица: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
