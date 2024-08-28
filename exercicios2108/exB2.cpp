#include <iostream>
#include <locale.h>
using namespace std;

bool par;
int parimpar(int n){
    if(n%2==0){
        par=true;
    }else{
        par=false;
    }
    return par;
}

int main(){
    int n;
    cin >> n;
    parimpar(n);
    if(par==true){
        cout << n << " É Par" << endl;
    }else{
         cout << n << " É Impar" << endl;
    }
}