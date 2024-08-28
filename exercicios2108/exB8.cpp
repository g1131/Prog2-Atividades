#include <iostream>
#include <locale.h>
using namespace std;

int ano;
bool bi;

bool bissexto(int ano){
    if(ano%4==0 && (ano%100!=0 || ano%400==0)){
        bi=true;
    }else{
        bi=false;
    }
    return bi;
}

int main(){
    cin >> ano;
    bissexto(ano);
    if(bi=true){
        cout << "O ano " << ano << " eh bissexto" << endl;
    }else{
        cout << "O ano " << ano << " nao eh bissexto" << endl;
    }
}