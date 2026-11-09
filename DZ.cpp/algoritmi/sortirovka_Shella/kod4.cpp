#include <iostream>
using namespace std;

int main()
{
    int n, a[100], t, j;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            t = a[i];
            j = i;
            while (j >= gap && a[j - gap] > t)
            {
                a[j] = a[j - gap];
                j -= gap;
            }
            a[j] = t;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}