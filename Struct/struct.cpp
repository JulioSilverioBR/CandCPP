#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <new>

using namespace std;
//Struct para frutas

struct frutas
{
    string cor;
    string nome;
};

int main (){

    //Criando Struct CPP
    frutas *primeiraFruta = new frutas;

    //Modificando valores
    primeiraFruta ->cor = "Vermelho";
    primeiraFruta ->nome = "Tomate";

    cout << "\n" << "Fruta: "<< primeiraFruta->nome << "\nCor: " << primeiraFruta->cor << "\n";


    //Criando Uma Lista de Structs CPP
    frutas *ponteirosListaDeFrutas =  new frutas[2];

    ponteirosListaDeFrutas[0].cor =  "Verde";
    ponteirosListaDeFrutas[1].cor =  "Amarelo";

    ponteirosListaDeFrutas[0].nome =  "Limao";
    ponteirosListaDeFrutas[1].nome =  "Abacaxi";

    for (int i = 0; i < 2; i++)
    {
    cout << "\nFruta: "<< ponteirosListaDeFrutas[i].nome << "\nCor:" << ponteirosListaDeFrutas[i].cor << "\n";
    }

    return 0;
}