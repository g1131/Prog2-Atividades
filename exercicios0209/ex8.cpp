#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctype.h>
#include <string>
using namespace std; 

void maiusculas(string b){
    string a;
    for(int i=0 ; i<b.length(); i++) {
        a[i]=b[i]-32;
        cout << a[i];
   }
}

int main(){

    string b;
    getline(cin, b);
    maiusculas(b);
    
    return 0;
}