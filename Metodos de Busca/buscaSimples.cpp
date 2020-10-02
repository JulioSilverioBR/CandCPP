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

int busca_simples(int vetor[TAM], int valorProcurado,int *posicaoEncontrada){
    
    bool valorEncontrado;
    
    for (int i = 0; i < TAM; i++)
    {
       if(vetor[i] == valorProcurado){
           *posicaoEncontrada = i + 1;
            return 1;
       }
    }
    return -1;
}

int main(){

    int vetor[TAM] = {23,44,66,72,90,89,20,29,85,15};
    int valorProcurado;
    int posicao, posicaoEncontrada = 0;
    
    imprimeVetor(vetor);
    
    cout << "\nQual numero deseja encontrar: ";
    cin >> valorProcurado;
    
    if( busca_simples(vetor, valorProcurado, &posicaoEncontrada) == 1){
           cout << "O Valor encontrado na posicao " << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado";
    }
    
    return 0;
}