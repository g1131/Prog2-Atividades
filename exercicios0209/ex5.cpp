#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int menoscinco(int a){
    a-+5;
    return a;
}

int main(){

    int a;
    cin >> a;
    cout << menoscinco(a) << endl;
    
    return 0;
}