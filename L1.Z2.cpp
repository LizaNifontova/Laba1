#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите размер массива: ";
    int N, t = 0;
    float s1, s2, s0;
    cin >> N;
    int a[100];
    for (int i = 0; i < N; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (i >= N - 2)
        {
            s1 = (a[i] + a[i + 1] + a[i + 2]) ;
            s0 = (a[i - 1] + a[i - 2] + a[i - 3]);
            if (s1 > s0)
            {
                t += 1;
                break;
            }
        }
        if (i >= 0 && i < 3)
        {
            s1 = (a[i] + a[i + 1] + a[i + 2]);
            s2 = (a[i + 3] + a[i + 4] + a[i + 5]);
            if (s1 > s2)
            {
                t += 1;
            }
        }
        if (i > 2 && i < N - 3)
        {
            s0 = (a[i - 1] + a[i - 2] + a[i - 3]);
            s1 = (a[i] + a[i + 1] + a[i + 2]);
            s2 = (a[i + 3] + a[i + 4] + a[i + 5]);
            if (s1 > s2 && s1 > s0)
            {
                t += 1;
            }

        }
    }
    cout << t << endl;
}
