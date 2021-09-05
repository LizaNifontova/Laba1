#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <iostream>
using namespace std;

int main()
{  
    setlocale(LC_ALL, "rus");
    cout << "Введите размер массива: ";
    int N, a, b;
    cin >> N;
    cout << "Введите размер полуосей:" << endl;
    cout << "а = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    int masx[100];
    int masy[100];

    for (int i = 0; i < N; i++)
    {
        cout << "x" << i + 1 << " = ";
        cin >> masx[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << "y" << i + 1 << " = ";
        cin >> masy[i];
    }
    for (int i = 0; i < N; i = i++)
    {
        if ((pow(masx[i], 2) / pow(a, 2) + pow(masy[i], 2) / pow(b, 2)) <= 1)
        {
            cout << i + 1 << endl;
        }
    }
}

