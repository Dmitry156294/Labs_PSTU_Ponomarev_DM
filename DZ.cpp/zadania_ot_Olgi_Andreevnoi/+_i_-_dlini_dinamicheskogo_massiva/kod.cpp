#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n = ";
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    int n2;
    cout << "new length = ";
    cin >> n2;

    int* arr2 = new int[n2];
    int m = (n2 < n) ? n2 : n;
    for (int i = 0; i < m; i++)
        arr2[i] = arr[i];

    delete[] arr;
    arr = arr2;

    for (int i = 0; i < n2; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}