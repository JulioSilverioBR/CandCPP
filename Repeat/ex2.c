#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");

    for (int i = 10;i <= 20; i++)
    {
        if(i % 2 == 0){
            printf("%d\n",i);
        }
    }
    
    return 0;
    system("pause");
}