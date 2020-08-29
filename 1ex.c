#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    //Uso de Acentos
    int a = 40;
    setlocale(LC_ALL,"");
    printf("Olá o valor de a é : %d \n",a);
    scanf("%d", &a);
    printf("o valor de a mudou para: %d", a);
    return 0;
    
}