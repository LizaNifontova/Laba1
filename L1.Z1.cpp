#include <iostream>
using namespace std;

int main()
{
    int N, a[100], s = 0, k = 0, n, t;
    double b;
    setlocale(LC_ALL, "rus");
    cout << "Количество элементов массива: ";
    cin >> N;
    cout << "Введите элементы массива: " << endl;
    n = N - 1;

    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> b;
        a[i] = b;
        if (a[i] < 6 && a[i] >= 0)
        {
            if ((b - int(b)) != 0)
            {
                break;
            }
            else
            {
                k += b * pow(10, n);
                n -= 1;
            }
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < N; i++)
    {
        t = k % 10 * pow(6, i);
        s += t;
        k = k / 10;
    }
    cout << "Число в десятичной системе: " << endl;
    cout << s << endl;
}


