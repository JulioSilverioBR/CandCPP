#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Poder usar acentos
    setlocale(LC_ALL,"");
    
    //Definindo Variaveis
    float n1,n2;

    //Lendo primeiro valor
    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);

    //Lendo Segundo Valor
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);

    //Resultado
    printf("A media dos dois numeros e: %.1f\n",(n1+n2)/2);
    
    system("pause");
    return 0;
}