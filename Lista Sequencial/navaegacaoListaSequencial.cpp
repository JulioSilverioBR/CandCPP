#include <iostream>
#include <string>
#include <string.h>
#include <new>
#define TAM 3

using namespace std;

int* alocaVetor(int tam){
    int *v;

    v = (int *)malloc(tam * sizeof(int));
    return v;
}

void imprimeSequencial(int vetor[TAM],int tamanhoLista){


    for (int i = 0; i < tamanhoLista; i++)
    {
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < tamanhoLista; i++)
    {
       printf("Valor %d = %d\n",i,vetor[i]);
    }
}

int main(){

    int tamanhoLista;
    int vetor[TAM] = {0,1,2};
    imprimeSequencial(vetor,TAM);

    //Vetor Dinámico
    printf("Digite o tamanho da Lista");
    scanf("%d",&tamanhoLista);
    /*

    //Passa o local da memória que foi criado para o vetor C
    int *vetorLidoNaHora = alocaVetor(tamanhoLista);

    imprimeSequencial(vetorLidoNaHora,tamanhoLista);
    */

    //Criando com C++
    int* vetorPP =  new int[tamanhoLista];
    imprimeSequencial(vetorPP,tamanhoLista);

    return 0;
}