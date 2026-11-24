#include <iostream>
using namespace std;

bool func(int mas[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (mas[i * N] > mas[(i + 1) * N])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    int mas[1000];

    cout << "Введите N: ";
    cin >> N;

    int len = N * N;

    cout << "Введите " << len << " цифр: ";
    for (int i = 0; i < len; i++)
    {
        cin >> mas[i];
    }

    if (func(mas, N))
        cout << "Можно" << endl;
    else
        cout << "Нельзя" << endl;

    return 0;
}