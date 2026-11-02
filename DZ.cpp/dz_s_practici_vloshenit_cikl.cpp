#include <iostream>
using namespace std;

int main(){
int n;
long long x;

cout << "Введите n: ";
cin >> n;

for (int i = 1; i <= n; i++) {
    x = i * (i + 1) * (i + 2) * 2LL * i;

    cout << "При n = " << i << " x = " << x << endl;
}

return 0;
}