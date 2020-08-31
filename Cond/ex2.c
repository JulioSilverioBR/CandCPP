#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    float n1, n2, n3, media;
    printf("Digite o valor das 3 Notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3)/3;

    if(media >= 7){
        printf("Aprovado com a Media: %.1f\n",media);
    }else{
        printf("Reprovado com a Media: %.1f\n",media);
    }

    system("pause");
    return 0;
}