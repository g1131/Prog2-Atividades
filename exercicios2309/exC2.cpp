#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <complex.h>
using namespace std;

struct numeros{
    double real;
    double complexo;
};

int main (){
    char op;
    numeros w, z;
    w.real = 0;
    w.complexo = 0;
    z.real = 0;
    z.complexo = 0;

    cout << "Digite a parte real do número W: " << endl;
    cin >> w.real;
    cout << "Digite a parte imaginária do número W: " << endl;
    cin >> w.complexo;

    cout << "Digite a operação matemática desejada: " << endl;
    cin >> op;

    cout << "Digite a parte real do número Z: " << endl;
    cin >> z.real;
    cout << "Digite a parte imaginária do número Z: " << endl;
    cin >> z.complexo;

    switch(op){
        case '+':
            cout << w.real + z.real << " + " << w.complexo + z.complexo << "i" << endl;
            break;
        case '-':
            cout << w.real - z.real << " + " << w.complexo - z.complexo << "i" << endl;
            break;
        case '*':
            cout << w.real * z.real << " + " << w.complexo * z.complexo << "i" << endl;
            break;
        case '/':
            cout << w.real / z.real << " + " << w.complexo / z.complexo << "i" << endl;
            break;
        default:
            break;
    }

    return 0;
}