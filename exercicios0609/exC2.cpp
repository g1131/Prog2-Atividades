#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>
#define N 5
using namespace std;
double m = 0;

int media(int v[]){
    for (int i = 0; i < N; i++){
        m+=v[i];
    }
    return m/N;
}
int main(){
    int v[N];
    for ( int i = 0; i < N; i++){
        cin >> v[i];  
    }
    cout << "media "<< media(v) << "\n";
    return 0;
}