#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#define T 8
using namespace std; 

void inverter(){
    int aux;
    int b[T]={1,2,3,4,5,6,7,8}, n[T];
    for(int j=0; j<T; j++){
        cout << b[j];
    }
    cout << endl;
    for(int i=0; i<T; i++){
        n[T-i-1]=b[i];
    }
    for(int j=0; j<T; j++){
        cout << n[j];
    }
}

int main(){
    inverter();
    return 0;
}