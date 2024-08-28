#include <iostream>
#include <locale.h>
using namespace std;

double calcularAreaRetangulo(double comprimento, double largura){
    return comprimento*largura;
}
 
int main(){
    double comprimento=0, largura=0;
    cin >> comprimento >> largura;
    cout << calcularAreaRetangulo(comprimento, largura) << endl;
}