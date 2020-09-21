#include <stdlib.h>
#include <stdio.h>
//Função Normal
void imprimeVetor(int *v, int tamanho){
    for (int i = 0; i < tamanho; i++)
        printf("%d\n",v[i]);
    
}

void modificaVetor(int *v, int tamanho,int mudanca){
     for (int i = 0; i < tamanho; i++)
    v[i] +=mudanca;
    
}

int main(){
    int v[3]={ 1,2,3 };

    modificaVetor(v,3,1);

    imprimeVetor(v,3);
    system("pause");
    return 0;
}