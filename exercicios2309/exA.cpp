#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

typedef struct{
    int hora;
    int minutos;
    int dia;
    int mes;
    int ano;
    string descricao;
}compromisso;

int main (){
    compromisso novoCompromisso;
    novoCompromisso.ano = 2024;
    novoCompromisso.mes = 12;
    novoCompromisso.dia = 11;
    novoCompromisso.hora = 13;
    novoCompromisso.minutos = 10;
    novoCompromisso.descricao = "Compromisso extremamente importante!!!!!!!!!!!!!!!!!";

    cout << "Novo compromisso marcado às ";
    cout << novoCompromisso.hora << ":" << novoCompromisso.minutos << " ";
    cout << "Do dia ";
    cout << novoCompromisso.dia << "/" << novoCompromisso.mes << "/" << novoCompromisso.ano << endl;
    cout << "Descrição: " << novoCompromisso.descricao << endl;

    return 0;
}