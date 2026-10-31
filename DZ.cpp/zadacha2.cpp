#include <iostream>
using namespace std;

int main(){
    int n,count,a[n];
    cin >>n;
    bool flag = false;
    for(int i = 0;i<n;i++){
        cin >>a[i];
    }
    for(int i = 1;i < n;i++){
        if(a[i-1]<a[i]){
            count++;
        }
    }
    if(count == n-1){
        flag = true;
    }
    if (flag){
        cout << "Массив упорядочен"<<endl;
    }else cout << "Массив не упорядочен"<<endl;
    return 0;
}