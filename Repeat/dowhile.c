#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");
    int i = 1;
    int a ;

    printf("Insira o número para qual tabuada você quer: ");
    scanf("%d",&a);

    do{
        printf("%d * %d = %d\n",a,i, a*i);     
        i++;
    }while (i <= 10);
    
    return 0;
    system("pause");
}