#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");
    int a ;

    printf("Insira o número para qual tabuada você quer: ");
    scanf("%d",&a);

//Tabuada a Escolha

    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n",a,i, a*i);     
        i++;
    }

    return 0;
    system("pause");
}