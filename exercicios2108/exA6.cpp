#include <iostream>
#include <locale.h>
using namespace std;

int x, y, result=1;

void potencia(){
    cin >> x >> y;
    while(y>0){
        result*=x;
        y--;
    }
    cout << result;
}

int main(){
    potencia();
}