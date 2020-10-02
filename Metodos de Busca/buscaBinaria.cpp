#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10
using namespace std;

void imprimeVetor(int vetor[TAM]){
     for (int i = 0; i < TAM; i++)
    {
       cout << vetor[i] << " | ";
    }
}

int busca_binaria(int vetor[TAM], int valorProcurado,int *posicaoEncontrada){

    int esquerda = 0;
    int direita = TAM - 1;
    int meio;
    while (esquerda <= direita)
    {
         meio = ( esquerda + direita ) / 2;


        if(valorProcurado == vetor[meio]){
        *posicaoEncontrada = meio;
        return 1;
    }

    if (vetor[meio] < valorProcurado)
    {
        esquerda = meio + 1;
    }else
    {
        direita = meio - 1;
    }
    }
    return -1;
}

int main(){

    int vetor[10] = {1,11,22,33,44,55,66,77,88,99};
    int valorProcurado;
    int posicao, posicaoEncontrada = 0;
    
    imprimeVetor(vetor);
    
    cout << "\nQual numero deseja encontrar: ";
    cin >> valorProcurado;

    if( busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1){
           cout << "O Valor encontrado na posicao " << posicaoEncontrada+1;
    }else{
        cout << "Valor nao encontrado";
    }
    
    return 0;
}