#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    //Para usar acentos
    setlocale(LC_ALL,"");
    //Definição de variaveis
    int a,b;

    //Leitura primeira variavel
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    
    //Leitura segunda variavel
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    //Resultado
    printf("o valor absoluta da diferenca deles e:%d \n",abs(a-b));

    system("pause");
    return 0;
}