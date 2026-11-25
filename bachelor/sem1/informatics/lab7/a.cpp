#include <iostream>
using namespace std;

int main()
{
    int a[10], i, min;
    cout << "Введите 10 чисел:";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << "Минимум: " << min;
    return 0;
}