#include <iostream>
#include <locale.h>
#include <climits>
using namespace std;

int gerarNumeroAleatorio(int a){
    srand((unsigned)time(NULL));
    a = rand() % 100000;
    return a;
}
 
int main(){
    int a;
    cout << gerarNumeroAleatorio(a) << endl;
}