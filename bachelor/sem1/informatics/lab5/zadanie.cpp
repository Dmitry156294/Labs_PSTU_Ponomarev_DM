#include <iostream>
using namespace std;

int main()
{
    int N;
    int mas[1000];
    bool flag = true;

    cout << "Введите N";
    cin >> N;

    int len = N * N;

    cout << "Введите " << len << " цифр ";
    for (int i = 0; i < len; i++)
    {
        cin >> mas[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (mas[i * N] > mas[(i + 1) * N])
        {
            flag = false;
        }
    }

    if (flag)
        cout << "Можно" << endl;
    else
        cout << "Нельзя" << endl;
    return 0;
}