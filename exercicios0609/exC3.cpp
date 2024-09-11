#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>
#define N 5
using namespace std;
double m = 0;

int positivos(int v[]){
    for (int i = 0; i < N; i++){
        if (v[i]>0){
            m++;
        }
    }
    return m;
}
int main(){
    int v[10];
    for ( int i = 0; i < N; i++){
        cin >> v[i];  
    }
    
    cout << "Número de positivos: "<< positivos(v) << "\n";
    return 0;
}