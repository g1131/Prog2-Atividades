#include <iostream>
#include <locale.h>
using namespace std;

int x, fat=1;

int fac(int x){
    for(int i=1; i<=x; i++){
        fat*=i;
    }
    return fat;
}

int main(){
    cin >> x;
    fac(x);
    cout << fat;
}