#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Executa dps confere
void main(){

    //Media automática

    setlocale(LC_ALL,"");
    int TAM;

    printf("Digite o número de notas: ");
    scanf("%d",&TAM);

    float notas[TAM];
    float media;

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor da nota %d: ",i+1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        media += notas[i]/TAM;
    }  

    printf(" o Valor da media eh: %.1f ",media);
    return 0;
    system("pause");
}