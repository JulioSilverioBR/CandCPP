#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");

    int n;
    int cont = 0;
    
    printf("Digite o Numero: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
         if(n % i == 0){
            cont++;
        }
    }
    
    if(cont == 2){
        printf("Numero primo");
    }else{
        printf("Numero nao primo");
    }
    
    return 0;
    system("pause");
}