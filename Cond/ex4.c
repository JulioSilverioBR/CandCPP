#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main(){
 
    //Para usar acentos
    setlocale(LC_ALL, "");
 
    
    float n1, n2;
    int opcao;
    
    printf("Digite os 2 valores:\n");
    scanf("%f %f", &n1, &n2);

    printf("\nDigite o valor da opcao 1- Somar/2-Subtrair/3-Dividir/4-Multiplicar:\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:
        printf("%.1f + %.1f = %.1f\n",n1,n2,n1+n2);
        break;

    case 2:
        printf("%.1f - %.1f = %.1f\n",n1,n2,n1-n2);
        break;

    case 3:
        printf("%.1f / %.1f = %.1f\n",n1,n2,n1/n2);
        break;

    case 4:
        printf("%.1f * %.1f = %.1f\n",n1,n2,n1*n2);
        break;
    
    default:
        printf("Operação Invalida\n");
        exit(0);
        break;
    }
    
    system("pause");
    return 0;
 
}