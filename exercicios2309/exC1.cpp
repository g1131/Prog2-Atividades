#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <complex.h>
using namespace std;

struct numeros{
    double real;
    string complexo;
};

int main (){
    numeros w, z;
    w.real = 0;
    w.complexo = "0";
    z.real = 0;
    z.complexo = "0";

    cout << "Digite a parte real do número W: " << endl;
    cin >> w.real;
    cout << "Digite a parte imaginária do número W: " << endl;
    getline(cin, w.complexo);

    cout << "Digite a parte real do número Z: " << endl;
    cin >> z.real;
    cout << "Digite a parte imaginária do número Z: " << endl;
    getline(cin, z.complexo);


    cout << "W: " << endl;
    cout << w.real << " + " << w.complexo << endl;
    cout << "Z: " << endl;
    cout << z.real << " + " << z.complexo << endl;


    return 0;
}