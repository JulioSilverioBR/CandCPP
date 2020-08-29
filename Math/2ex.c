#include <stdio.h>
#include <stdlib.h>

    //Funcões matemáticas
void main(){
    //Definição de valores

    int a = 6, b = 2;

    //Soma
    printf("A Soma de %d e %d é igual a = %d \n",a,b,a+b);

    //Subtração
    printf("A subtracao de %d e %d é igual a = %d \n",a,b,a-b);

    //Divisão
    printf("A divisao de %d e %d é igual a = %d \n",a,b,a/b);

    //Multiplicação
    printf("A multiplicação de %d e %d é igual a = %d \n",a,b,a*b);

    //Resto da divisão
    printf("o Resto da divisão  de %d e %d é igual a = %d \n",a,b,a%b);

    //Valor absoluto
    printf("o valor absoluto  de %d é igual a = %d \n",a,abs(a));
    
    system("pause");
    return 0;