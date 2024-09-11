#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>
using namespace std;

void vetor(int v[], int N){
    cin >> N;
    int m;
    m=N;
    for(int i = 0; i < N; i++){
        cin >> v[i];  
    }
}

int main(){
    int N=0;
    int v[N];
    vetor(v, N);
    for(int j = 0; j < N; j++){
        cout << v[j];
    }
    return 0;
}