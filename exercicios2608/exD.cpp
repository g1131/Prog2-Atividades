#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float *fp=NULL, numero1=7.3, numero2=0.0;
    fp=&numero1;
    cout << *fp << endl;
    numero2=*fp;
    cout << numero2 << endl;
    cout << &numero1 << endl;
    cout << fp << endl;
    /*O Valor impresso é o mesmo.*/

    return 0;
}