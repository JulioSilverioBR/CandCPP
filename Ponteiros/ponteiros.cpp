#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stdbool.h>

using namespace std;

//Variaveis Armazenam valores, Ponteiros Armazenam posições da memoria
    int main(){
    
    int a = 10;
    // Valor da Variavel
    cout << "o Valor de A = " << a << "\n";
    //Posição na memoria da variavel
    cout << "o endereco de A na memoria = " << &a << "\n";

    //Criando Variavel
    int b = 20;

    //Ponteiros armazenam somente posições na memoria das variaveis
    //Criando um ponteiro e pedindo para que ele armazene o endereço da variavel B
    int *ponteiro = &b;
    //Imprimindo valor da variavel B
    cout << "o Valor de B = " << b << "\n";

    //* pode ser lido como  "Conteudo apontado por"
    //Pegue o conteudo apontado pelo ponteiro e mude o valor dele para 40
    //Estou diretamente mudando o valor da variavel B pelo seu endereço na memoria
    *ponteiro = 40;

    cout << "o Valor de B = " << b << "\n";
    
    system("pause");
    return 0;
}