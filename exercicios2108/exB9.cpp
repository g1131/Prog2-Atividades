#include <iostream>
#include <locale.h>
using namespace std;

float conversao(float C){
    float F;
    F=(C*1.8) + 32;
    return F;
}

int main(){
    float C;
    cin >> C;
    cout << C << " Celsius é igual a " << conversao(C) << " Fahrenheit" <<endl;
}