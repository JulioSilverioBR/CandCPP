#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");

    //For
    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n",i);     
    }

    //While

    int i=10;
    while ( i >= 0)
    {
        printf("%d\n",i);     
        i--;
    }

    //Do
    
    i=10;
    do{
        printf("%d\n",i);     
        i--;
    }while (i >= 0);
   

    return 0;
    system("pause");
}