#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int maisdez(int a){
    a+=10;
    return a;
}

int main(){

    int a;
    cin >> a;
    cout << maisdez(a) << endl;
    
    return 0;
}