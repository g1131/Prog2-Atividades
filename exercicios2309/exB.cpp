#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <complex.h>
using namespace std;

struct Vetor{
    float x;
    float y;
    float z;
};

int main (){
    Vetor vetor1, vetor2;
    vetor1.x = 0;
    vetor1.y = 0;
    vetor1.z = 0;
    vetor2.x = 0;
    vetor2.y = 0;
    vetor2.z = 0;

    cout << "Por favor digite os valores do primeiro vetor:" << endl;
    cin >> vetor1.x;
    cin >> vetor1.y;
    cin >> vetor1.z;
    cout << "Por favor digite os valores do segundo vetor:" << endl;
    cin >> vetor2.x;
    cin >> vetor2.y;
    cin >> vetor2.z;

    cout << "O novo vetor tem: " << endl;
    cout << "x: " << vetor1.x + vetor2.x << endl;
    cout << "y: " << vetor1.y + vetor2.y << endl;
    cout << "z: " << vetor1.z + vetor2.z << endl;


    return 0;
}