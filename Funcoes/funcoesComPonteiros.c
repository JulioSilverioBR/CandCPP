#include <stdlib.h>
#include <stdio.h>
//Função Normal
int retornaComMais10(int n1){
    return n1 + 10;
}
//Função com ponteiro
void aumentaDez(int *n1){
     *n1 += 10;
}

int main(){
    int a = 5;
    printf("%d\n",a);
    // Função Normal
    a = retornaComMais10(a);
    printf("%d\n",a);
    // Função com Ponteiro
    aumentaDez(&a);
    printf("%d\n",a);
    system("pause");
    return 0;
}