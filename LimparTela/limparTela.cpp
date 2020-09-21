#include <stdlib.h>
#include <stdio.h>

using namespace std;

    void limpaTela(){
         system("CLS"); // Limpar Tela
    }

    void pausarPrograma(){
        system("pause");
    }

    int main(){
    
    int a;

    printf("Digite um valor para A: ");
    scanf("%d",&a);

    limpaTela();

    printf("O valor digita foi %d\n", a);

    pausarPrograma();
    
    return 0;
}