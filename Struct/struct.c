#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct palavra
{
    int ordem;
    char letra;
    char texto[255];
};



int main(){
    //Criando Palavra
    struct palavra primeiraPalavra;

    //Modificando Atributos
    primeiraPalavra.ordem = 0;
    primeiraPalavra.letra = 'A';
    strcpy(primeiraPalavra.texto,"Teste");

    printf("Ordem: %d | Letra = %c | Texto = %s \n",primeiraPalavra.ordem,primeiraPalavra.letra,primeiraPalavra.texto);
    
    //Criando Lista de Structs
    struct palavra listaPalavras[3];

    listaPalavras[0].ordem = 1;
    listaPalavras[1].ordem = 2;
    listaPalavras[2].ordem = 3;

    listaPalavras[0].letra = "A";
    listaPalavras[1].letra = "B";
    listaPalavras[2].letra = "C";
    
    strcpy(listaPalavras[0].texto,"Dahora");
    strcpy(listaPalavras[1].texto,"Legal");
    strcpy(listaPalavras[2].texto,"Bacana");

    // Percorrendo Vetor
        for (int i = 0; i < 3; i++)
        {
                printf("Ordem: %d | Letra = %c | Texto = %s \n",listaPalavras[i].ordem,listaPalavras[i].letra,listaPalavras[i].texto);
        }
        


    return 0;
}