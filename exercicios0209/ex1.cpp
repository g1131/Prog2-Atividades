#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int mult(int a, int b){
    return a*b;
}

int main(){

    int a, b;
    cin >> a >> b;
    cout << mult(a, b) << endl;
    
    return 0;
}