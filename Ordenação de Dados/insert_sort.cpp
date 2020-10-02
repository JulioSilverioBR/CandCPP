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

void insertion_sort(int vetor[TAM]){
        for (int i = 1; i < TAM; i++)
        {
            int atual = vetor[i];
            int j = i - 1;
            //Analisando Membros Anteriores
            while(j >= 0 && atual < vetor[j]){
                vetor[j+1] = vetor[j];
                j = j - 1;
            }
            vetor[j+1] = atual;
            imprimeVetor(vetor);
        }
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    insertion_sort(vetor);

    return 0;
}