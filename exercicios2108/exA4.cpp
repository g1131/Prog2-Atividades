#include <iostream>
#include <locale.h>
#define PI 3.14159265359
using namespace std;

double raio;

void volumeesfera(){
    cin >> raio;
    cout << "O volume dessa esfere eh igual a " << (4*PI*(raio*raio*raio))/3;
}

int main(){
    volumeesfera();
}