#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"");
    //Responsavel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Variavel que recebe o resto da divisão do número por 3( ira ser entre 0 ou 2)
    int rnd = rand() % 3;
    //Variavel que recebe o resto da divisão do número por 3( ira ser entre 1 ou 5)
    int rnd2 = (rand() % 5) + 1;


    printf("%d", rnd);
    system("pause");
    return 0;
}