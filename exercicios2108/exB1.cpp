#include <iostream>
#include <locale.h>
using namespace std;

int n;
bool multiplo;

int mult4(int n){
    cin >> n;
    if(n%4==0){
        multiplo=true;
    }else{
        multiplo=false;
    }
    return multiplo;
}

int main(){
    mult4(n);
    if(multiplo){
        cout << "É multiplo de 4" << endl;
    }else{
        cout << "Não é multiplo de 4" << endl;
    }
}