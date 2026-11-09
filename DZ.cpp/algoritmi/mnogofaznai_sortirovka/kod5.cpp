#include <iostream>
using namespace std;

int main()
{
    int n, a[100], b[100], c[100];
    int nb, nc, i, j, k, len, x, y;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (len = 1; len < n; len *= 2)
    {
        nb = 0;
        nc = 0;
        for (i = 0; i < n; i++)
        {
            if ((i / len) % 2 == 0)
            {
                b[nb] = a[i];
                nb++;
            }
            else
            {
                c[nc] = a[i];
                nc++;
            }
        }
        i = 0;
        j = 0;
        k = 0;
        while (k < n)
        {
            x = 0;
            y = 0;
            while ((x < len && i < nb) || (y < len && j < nc))
            {
                if (x < len && i < nb && (y >= len || j >= nc || b[i] <= c[j]))
                {
                    a[k] = b[i];
                    k++;
                    i++;
                    x++;
                }
                else
                {
                    a[k] = c[j];
                    k++;
                    j++;
                    y++;
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}