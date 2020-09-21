#include <stdlib.h>
#include <stdio.h>

int *alocaVetor(int tamanho){
    //Ponteiro Auxiliar
    //Alocação Dinamica de Memória
    int *aux = (int*)malloc(tamanho * sizeof(int));
    //Retorna o tamanho da memoria do vetor
    return aux;
}

void scannereImprimeVetor(int *vetor,int tamanho){
    for (size_t i = 0; i < tamanho ; i++)
    {
        scanf("%d",&vetor[i]);
    }
    for (size_t i = 0; i < tamanho ; i++)
    {
        printf("Posicao %d = %d\n",i+1,vetor[i]);
    }
}

int main(){
    //Cria  Ponteiro
    int *vetor, tamanho;

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    vetor =  alocaVetor(tamanho);

    scannereImprimeVetor(vetor, tamanho); 
    return 0;  
}