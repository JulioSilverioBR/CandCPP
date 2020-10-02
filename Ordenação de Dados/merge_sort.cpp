#include<stdio.h>
#include<stdlib.h>
#define TAM 10
 
void imprimirVetor(int *vetor);
void limpaTela();
void mergeSort(int *vetor, int indiceEsquerdo, int indiceDireito);
void merge(int *vetor, int indiceEsquerdo, int meio, int indiceDireito);
 
int main(){
 
    int vetor[TAM] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
 
    limpaTela();
 
    printf("* * *Vetor nao ordenado* * *\n");
    imprimirVetor(vetor);
    printf("\n\n");
 
    printf("* * *Vetor ordenado com Merge Sort* * *\n");
    mergeSort(vetor, 0, TAM - 1);
    imprimirVetor(vetor);
 
 
    return 0;
}
 
void imprimirVetor(int *vetor){
    printf("O vetor esta na seguinte ordem: { ");
    for(int i = 0; i < TAM; i++){
        printf("%d ",  vetor[i]);
    }
    printf("}.");
}
 
void limpaTela(){
    system("cls");
}
 
void mergeSort(int *vetor, int indiceEsquerdo, int indiceDireito){
 
    int meio;
 
    if(indiceEsquerdo < indiceDireito){
 
        //Encontra o meio:
        meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;
        
        //Metade de trás:
        mergeSort(vetor, indiceEsquerdo, meio);
 
        //Metade da frente:
        mergeSort(vetor, meio + 1, indiceDireito);
 
        imprimirVetor(vetor);
        printf("\n");
 
        merge(vetor, indiceEsquerdo, meio, indiceDireito);
 
    }
   
}
 
void merge(int *vetor, int indiceEsquerdo, int meio, int indiceDireito){
 
    int i, j, k;
 
    //Criando duas arrays temporarios
    int n1 = meio - indiceEsquerdo + 1;
    int n2 = indiceDireito - meio;
    int vetorEsquerdo[n1], vetorDireito[n2];
 
    //Passa os elementos do vetor principal para o auxiliar esquerdo:
    for(i = 0; i < n1; i++){
        vetorEsquerdo[i] = vetor[indiceEsquerdo + i];
    }
 
     //Passa os elementos do vetor principal para o auxiliar direito:
    for(j = 0; j < n2; j++){
        vetorDireito[j] = vetor[meio + 1 + j];
    }
 
    i = 0;
    j = 0;
    k = indiceEsquerdo;
 
    while(i < n1 && j < n2){
 
        //Caso valor na esquerda seja menor:
        if(vetorEsquerdo[i] <= vetorDireito[j]){
 
            //Passa para o vetor principal o valor menor:
            vetor[k] = vetorEsquerdo[i];
            //Incrementa o auxiliar para passar a analise para o proximo vetor:
            i++;
 
        } else {
            vetor[k] = vetorDireito[j];
            j++;
        }
 
        //Aumemta o indice de posicionamento no vetor: 
        k++;
    }
 
    //Se faltar alguns elementos do array esquerdo, passa eles para o array principal:
    while(i < n1){
        vetor[k] = vetorEsquerdo[i];
        i++;
        k++;
    }
    
    //Se faltar alguns elementos do array direito, passa eles para o array principal:
    while(j < n2){
        vetor[k] = vetorDireito[j];
        j++;
        k++;
    }
}