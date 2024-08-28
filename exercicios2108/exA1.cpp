#include <iostream>
#include <locale.h>
using namespace std;

int n;

void mult4(){
    cin >> n;
    n%4==0? (cout << "Multiplo de 4") : (cout << "nao eh multiplo de 4");
}

int main(){
    mult4();
}