#include <iostream>
#include <locale.h>
using namespace std;

int ano;

void bissexto(){
    cin >> ano;
    if(ano%4==0 && (ano%100!=0 || ano%400==0)){
        cout << "O ano " << ano << " eh bissexto" << endl;
    }else{
        cout << "O ano " << ano << " nao eh bissexto" << endl;
    }
}

int main(){
    bissexto();
}