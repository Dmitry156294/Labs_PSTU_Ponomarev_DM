#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double sum1,sum2,e,a,y;
    int n,i;
    e=1e-4;
    n=20;
    i=1;
    for(double x = 0.1;x <= 1;x = x + 0.09){
        sum1 = 1.0;
        a = 1.0;
        i = 1;
        while(i < n){
            a = a * (2 * x) / i;
            sum1 = sum1 + a;
            i++;
        }
        sum2 = 1.0;
        a = 1.0;
        i = 1;
        while(a>=e){
            a = a * (2 * x) / i;
            sum2 = sum2 + a;
            i++;
        }
        y=exp(2*x);
    cout <<"x = " << x << "; sum1 = "<< sum1 << "; sum2 = "<< sum2 <<"; y = " << y << endl;
    }
    return(0);
}