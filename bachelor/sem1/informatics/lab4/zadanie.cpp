#include <iostream>
using namespace std;

int main(){
    int mas[100];
    int n,k;
    cout << "Введите размер массива" << endl;
    cin >> n;
    cout << "Введите элементы массива" << endl;
    for(int i = 0;i < n; i++){
        cin >> mas[i];
    }
    cout <<"Введите k" << endl;
    cin >> k;
    if (k < 0 || k >= n){
        cout <<"K вне диапозона" << endl;
        return 1;
    }
    cout <<"Массив начиная с индекса к" << endl;
    for(int i = 0 ; i < n ; i ++){
        int index = (k - i + n * 10) % n;
        cout << mas[index] << " ";
    }
    cout << endl;
    int perviy_element = mas[0], posledniy_element = mas[n-1];
    mas[n] = perviy_element;
    mas[n+1] = posledniy_element;
    n = n + 2;
    cout <<"Массив после добавления первого и последнего элемента" << endl;
    for (int i = 0 ;i < n ; i++){
        cout << mas[i] << " ";
    }
    cout << endl;
    for( int i = 0 ; i < n ; i ++){
        if (mas[i] % 2 != 0){
            for (int j = i ; j < n -1 ; j++){
                mas[j] = mas[j + 1];
            }
        n--;
        i--;
        }
    }
    cout << "Массив после удаления нечетных элементов" << endl;
    int newk = k % n; 
    for (int i =0 ;i < n ; i++){
        int index = (newk - i + n * 10) % n;
        cout << mas[index] << " ";
    }
    cout << endl;
    return 0;
}