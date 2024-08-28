#include <iostream>
#include <locale.h>
using namespace std;

int x, y, result;

void somando(){
    cin >> x >> y;
    while(x<=y){
        result+=x;
        x++;
    }
    cout << result;
}

int main(){
    somando();
}