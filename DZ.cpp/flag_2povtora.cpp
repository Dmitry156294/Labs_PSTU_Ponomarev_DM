 #include <iostream>
 using namespace std;

 int main(){
    int n,pred,tec;
    cout <<"Введите n" << endl;
    cin >> n;
    bool flag = false;
    cin >> pred;
    for(int i = 1;i < n;i++){
        cin >> tec;
        if(pred == tec){
            flag = true;     
        }else pred = tec;

    }
    if (flag){
        cout << pred << endl;
    }else cout << "Таких элементов нету" << endl;
    return 0;
 }