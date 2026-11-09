#include <iostream>
using namespace std;

int main()
{
    int n, a[100], mn, t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        mn = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[mn])
            {
                mn = j;
            }
        }
        t = a[i];
        a[i] = a[mn];
        a[mn] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}