#include <stdio.h>
#include <stdlib.h>
#include <new>

void scannereImprimeVetor(int *vetor,int tamanho){
    for (size_t i = 0; i < tamanho ; i++)
    {
        printf("Posicao %d = %d\n",i+1,vetor[i]);
    }
}

int main (){
    int tamanho;

    //Lendo o tamanho
    printf("Digite o tamanho: ");
    scanf("%d",&tamanho);
    int *vetor = new int(tamanho);

    for (int i = 0; i < tamanho ; i++)
    {
        vetor[i] = i;
        printf("Posicao %d = %d\n",i+1,vetor[i]);
    }
    return 0;
}