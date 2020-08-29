#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a,b,c,r;
    scanf("%d %d %d",&a,&b,&c);

    r = a*b*c;
    printf("Resultado da multiplicação dos três numero e: %d \n",r);

    system("pause");
    return 0;
}