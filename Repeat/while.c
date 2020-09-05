#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    int i = 1;
    int a ;

    printf("Insira o número para qual tabuada você quer: ");
    scanf("%d",&a);

    while (i <= 10){
    
    printf("%d * %d = %d\n",a,i, a*i);     
    i++;
    
    if(i == 10){
        while (i>0)
        {
            printf("%d * %d = %d\n",a,i, a*i);     
            i--;
        }
            system("pause");
            return 0;
        }
    }
}