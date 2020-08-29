#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    //Uso de Acentos
    int a = 40;
    setlocale(LC_ALL,"");
    printf("Olá o valor de a e : %d \n",a);
    scanf("%d", &a);
    printf("o valor de a mudou para: %d\n", a);


    
    float b = 40.6;
    printf("Olá o valor de b e : %f \n",b);
    scanf("%f", &b);
    printf("o valor de b mudou para: %f\n", b);

    
    char c = 'a';
    printf("Olá o valor de c e : %c \n",c);
    //Sempre que for usar uma char fazer limpeza de buffer
    fflush(stdin);
    scanf("%c", &c);

    printf("o valor de c mudou para: %c\n", c);
    
    system("pause");
    return 0;
    
}