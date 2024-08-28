#include <iostream>
#include <locale.h>
using namespace std;

int C, F;

void conversao(){
    cin >> C;
    F = C * (9/5) + 32;
    cout << C << " Celsius eh igual a " << F << " Fahrenheit" <<endl;
}

int main(){
    conversao();
}