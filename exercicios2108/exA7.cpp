#include <iostream>
#include <locale.h>
#define PI 3.14159265359
using namespace std;

double raio;

void areacirculo(){
    cin >> raio;
    cout << "A area dessa esfere eh igual a " << PI*(raio*raio);
}

int main(){
    areacirculo();
}