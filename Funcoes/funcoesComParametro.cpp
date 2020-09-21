#include <stdlib.h>
#include <stdio.h>

using namespace std;

    void mostraSucessorInt(int num){
    printf("O sucessor de %d eh %d\n",num, num + 1);
    }

    int retornaAntecessor(int num){
    return num-1;
    }

    int main(){
        
    int a;
    printf("Digite um valor para A: ");
    scanf("%d",&a);

    mostraSucessorInt(a);

    printf("o antecessor de %d eh %d\n",a, retornaAntecessor(a));

    system("pause");
    return 0;
}