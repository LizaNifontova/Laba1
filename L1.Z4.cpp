#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите размер массива: ";
    int N, t;
    cin >> N;
    int a[100];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    cout << endl;
    while (i != N - 2)
    {
        if (a[i] <= a[i + 1])
        {
            i++;
        }
        if (a[i] > a[i + 1])
        {
            t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
            i--;
        }
    }
    int k = 1;
    for (i = 0; i < N; i++)
    {
        cout << "m[" << k << "]= " << a[i] << "\n"; 
        k++;
    }

}

