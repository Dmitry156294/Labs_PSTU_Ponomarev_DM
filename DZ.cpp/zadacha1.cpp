#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0;i < n ; i ++){
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    int max_index,min_index,max_count,min_count;
    max_count=0;
    min_count=0;
    max_index=0;
    min_index=0;
    for (int i = 1;i < n ; i ++){
        if(a[i] > max){
            max = a[i];
            max_index = i;
        }
        if(a[i] < min){
            min = a[i];
            min_index = i;
        }
    }
    for(int i =0; i<n;i++){
        if(a[i]==min){
            min_count++;
        }
        if(a[i]==max){
            max_count++;
        }
    }
    for (int i = 0;i < n ; i ++){
        if(a[i] > max){
            max_index = i;
        }
        if(a[i] < min){
            min_index = i;
        }
    }
    cout <<"Минимальное значение = " << min << endl;
    cout <<"Максимальное значение = " << max << endl;
    cout <<"Индекс первого встретившегося минимального элемента = " << min_index << endl;
    cout <<"Индекс первого встретившегося максимального элемента = " << max_index << endl;
    cout <<"Количество элементов, равных максимальному = " << max_count << endl;
    cout <<"Количество элементов, равных минимальному = " << min_count << endl;
    return 0;
}