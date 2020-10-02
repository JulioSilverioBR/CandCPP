#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM]){
    cout << "\n";

     for (int i = 0; i < TAM ; i++)
    {
       cout << vetor[i] << " | ";
    }

    cout << "\n";
}

void selection_sort(int vetor[TAM]){
    int posicaoMenor,aux;

    for (int i = 0; i < TAM; i++)
    {
       posicaoMenor = i ;
       for (int j = i+1; j < TAM; j++)
       {
           if(vetor[j] < vetor[posicaoMenor]){
               posicaoMenor = j ;
           }

       }
       if(posicaoMenor != i){
           aux = vetor[i];
           vetor[i] = vetor[posicaoMenor];
           vetor[posicaoMenor] =  aux;
       }
    }
    
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    selection_sort(vetor);
    imprimeVetor(vetor);
    return 0;
}