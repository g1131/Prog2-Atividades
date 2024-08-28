#include <iostream>
#include <locale.h>
#define PI 3.14159265359
using namespace std;

double raio;

int areacirculo(int raio){
    raio=PI*(raio*raio);
    return raio;
}

int main(){
    cin >> raio;
    cout << "A area dessa esfere eh igual a " << areacirculo(raio);
}