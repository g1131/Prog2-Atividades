#include <iostream>
#include <locale.h>
using namespace std;

int global;

void wowzers(){
    cin >> global;
    if(global%426==0){
        global=1;
    }else{
        global=0;
    }
    cout << "global" << global << endl;
}

int wowzers2(int local){
    local*=local;
}

int main(){
    int local;
    cin >> local;
    wowzers();
    wowzers2(local);
}