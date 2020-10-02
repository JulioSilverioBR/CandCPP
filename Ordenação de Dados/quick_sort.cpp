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

void quick_sort(int vetor[TAM], int inicio, int fim){
    int pivo,esq,dir,meio;
    esq = inicio;
    dir = fim;
    
    meio = (int) ((esq+dir)/2);
    pivo = vetor[meio];
    
    while(dir > esq){

    while(vetor[esq] < vetor[pivo]){
        esq = esq + 1;
        }
    while(vetor[dir] > vetor[pivo]){
        dir = dir - 1;
        }

    if(esq <= dir){
        //Realiza troca
        int aux = vetor[esq];
        vetor[esq] = vetor[dir];
        vetor[dir] = aux;

        esq = esq + 1;
        dir = dir - 1;
        }
    imprimeVetor(vetor);

    }

    if(inicio < dir){
        quick_sort(vetor,inicio,dir);
    }

    if(esq < fim){
        quick_sort(vetor,esq,fim);
    }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    quick_sort(vetor, 0, TAM);
    return 0;
}