#include <iostream>
using namespace std;

int main(){
    int m,n,i,j;
    int mas[4][4];
    cin >> n >> m;
    for( i = 0;i < n;i++){
        for(j=0;j<m;j++){
            cin >> mas[i][j];
        }
    }
    for(i = 0;i < n;i++){
        for( j = 0;j < m; j++ ){
            cout <<mas[i][j]<<" ";
        }
        cout << endl;
    }
    int maxj=0,maxi=0;
    int max = mas[0][0];
    for(i = 0;i < n;i++){
        for( j = 0;j < m; j++ ){
            if (mas[i][j] > max){
                max = mas[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << "Максимальный элемент = " << max <<endl;
    cout << "Индекс максимального элемента ["<<maxi<<","<<maxj<<"]" << endl;
    return 0;
}