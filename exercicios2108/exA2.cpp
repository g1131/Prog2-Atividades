#include <iostream>
#include <locale.h>
using namespace std;

int n;

void parimpar(){
    cin >> n;
    n%2==0? (cout << "Par") : (cout << "Impar");
}

int main(){
    parimpar();
}