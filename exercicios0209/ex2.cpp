#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

void resultado(int *x, int *y, int *soma) {
    *soma = *x + *y;
}

int main() {
    int soma = 0, x = 0, y = 0;
    cin >> x >> y;
    resultado(&x, &y, &soma);
    cout << soma << endl;
    return 0;
}

