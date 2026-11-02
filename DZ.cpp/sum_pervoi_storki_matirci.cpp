#include <iostream>
using namespace std;

int main(){
    int mas[100][100];
    int n,sum;
    cout << "Введите n" << endl;
    cin >> n;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n ; j++){
            cin >> mas[i][j];
        }
    }
    sum = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n ; j++){
            if(i == 0){
                sum = sum + mas[0][j];
            }
        }
    }
    cout << "Сумма первой строки = " << sum << endl;
    return 0;
}
