#include <stdlib.h>
#include <stdio.h>

void mostrarSomaeImprime(int v1, int v2){
    printf("\n A soma entre %d e %d e igual a: %d\n",v1, v2, v1+v2);
}

int retornaSoma(int v1, int v2){
    return v1+v2;
}

int main(){
    int a = 5, b = 10;
    mostrarSomaeImprime(a,b);

    printf("\n a soma de %d e %d e igual a: %d",a, b, retornaSoma(a,b));
    system("pause");
    return 0;
}