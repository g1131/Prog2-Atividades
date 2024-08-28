#include <iostream>
#include <locale.h>
using namespace std;


int somando(int x, int y, int resultado){
    for(int i=x; i<=y; i++){
        resultado+=i;
    }
    return resultado;
}

int main(){
    int x, y, resultado;
    cin >> x >> y;
    somando(x, y, resultado);
    cout << resultado;
}