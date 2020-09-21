#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Executa dps confere
void main(){

    setlocale(LC_ALL,"");
    

    //Criando String
    char palavra[10];

    printf("Digite uma palavra: ");

    //Limpando a entrada de dados para não puxar algo indesejado na variavel
    setbuf(stdin,0);

    //Lendo a String
    fgets(palavra, 255, stdin);

    //Limpa as casas não ultilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s\n",palavra);
    
    system("pause");

    return 0;
    system("pause");
}