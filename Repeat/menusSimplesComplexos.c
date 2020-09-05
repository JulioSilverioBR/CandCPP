#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

//Executa dps confere
void main(){
    setlocale(LC_ALL,"");
   
    int opcao;

  
    while (opcao >3 || opcao < 1 )
    {
        printf("Escolha a Opção \n1-Opcao 1 \n2-Opcao 2 \n3-Opcao 3\n");     
        scanf("%d",&opcao);

        switch (opcao)
         {
        case 1 :
            printf("Opcao 1 Escolhida\n");
        break;
        
        case 2 :
            printf("Opcao 2 Escolhida\n");
        break;

        case 3 :
            printf("Opcao 3 Escolhida\n");
        break;
    
        default:
            printf("Opcao Invalida\n\n");
        break;
    }
   }
   
    return 0;
    system("pause");
}