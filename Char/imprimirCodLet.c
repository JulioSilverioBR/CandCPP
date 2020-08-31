#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    char letra;
    scanf("%c", &letra);

    printf("O Codigo da letra %c e %d \n", letra, letra);

    system("pause");
    return 0;
}