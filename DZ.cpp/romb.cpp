#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n, c, i, j;
    cout << "Введите n" << endl;
    cin >> n;
    c = (n + 1) / 2;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if (abs(i - c) + abs(j - c) <= c - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if (abs(i - c) + abs(j - c) == c - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}