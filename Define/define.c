#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define TAM 2

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", TAM, i, TAM * i);
    }
    

    return 0;
    system("pause");
}