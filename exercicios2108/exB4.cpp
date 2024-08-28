#include <iostream>
#include <locale.h>
#include <cmath>
#define PI 3.14159265359
using namespace std;

double raio, r, cou;

double volumeesfera(double raio){
    return (4*PI*(pow(raio, 3)))/3;
}

int main(){
    cin >> r;
    cou=volumeesfera(r);
    cout << "O Volume da esfera é " << cou << endl;
}