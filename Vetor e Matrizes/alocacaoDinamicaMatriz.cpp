#include <stdio.h>
#include <stdlib.h>
#include <new>

int main(){
    int linhas,colunas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d",&linhas);
    
    printf("Digite a quantidade de colunas: ");
    scanf("%d",&colunas);

    int **matriz;

    //Alocando Linhas
    matriz = (int **) new int[linhas];
    //Alocando memoria para colunas de cada linha
    for(int i = 0;i < linhas ; i++){
            matriz[i] = (int *) new int[colunas];
        }
    for(int i = 0; i < linhas ; i++){
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = i;
            printf("%d ",matriz[i][j]);
        }
            printf("\n");
    }
    free(matriz);
    return 0;
}