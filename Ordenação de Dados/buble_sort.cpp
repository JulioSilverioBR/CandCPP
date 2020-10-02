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

void buble_sort( int vetor[TAM]){
    for (int x = 0; x < TAM; x++)
        {
            imprimeVetor(vetor);
            for (int y  = x+1; y < TAM; y++)
            {
                if(vetor[x] > vetor[y]){
                    int aux;
                    aux = vetor[x];
                    vetor[x] = vetor[y];
                    vetor[y] = aux;
                }
            }
        }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    buble_sort(vetor);
    imprimeVetor(vetor);
    

    return 0;
}