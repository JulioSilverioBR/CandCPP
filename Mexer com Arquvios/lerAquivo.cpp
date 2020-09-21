#include <stdlib.h>
#include <stdio.h>
#include <fstream>

int main(){
    //Cursor que ira correr cada letra
    int c;

    //Arquivo a ser lido
    FILE *file;

    //abre o arquivo do diretorio escolhido

    file =  fopen("Texto.txt", "r");

    //Verificar se o arquivo foi encontrado

    if(file){
        while ((c = getc(file)) != EOF)
        {
            printf("%c",c);
        }
        //Fecha  o Arquivo;
        fclose(file);
    }else{
        printf("Arquivo não encontrado");
    }

    return 0;
}