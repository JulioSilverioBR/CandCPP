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

void shell_sort(int vetor[TAM]){
    int h = 1;
    //Enquanto se há o pulo entre ananalises
    while(h< TAM){
        h = 3 * h + 1;
    }
    while(h>1){
        h = h / 3;

         for (int i = h; i < TAM; i++)
        {
            int atual = vetor[i];
            int j = i - h;
            //Analisando Membros Anteriores
            while(j >= 0 && atual < vetor[j]){
                vetor[j + h] = vetor[j];
                j = j - h;
            }
            vetor[j+h] = atual;
        }
    }

   
}

int main(){
    int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
    imprimeVetor(vetor);
    shell_sort(vetor);
    imprimeVetor(vetor);
    return 0;
}