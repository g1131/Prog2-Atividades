#include <iostream>
#include <locale.h>
using namespace std;

int x, fat=1;

void fac(){
    cin >> x;
    for(int i=1; i<=x; i++){
        fat*=i;
    }
    cout << fat;
}

int main(){
    fac();
}