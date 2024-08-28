#include <iostream>
#include <locale.h>
using namespace std;

int x, y;

int potencia(int x, int y){
    int result=1;
    while(y>0){
        result*=x;
        y--;
    }
    return result;
}

int main(){
    cin >> x >> y;
    cout << potencia(x, y);
}