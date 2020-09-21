#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data{
    int dia;
    int mes;
    int ano;
}
Data;

struct aluno
{
    int id;
    Data nascimento;
};



int main(){
    //Criando Palavra
    struct aluno aluno_1;
    
    aluno_1.nascimento.dia = 24;
    aluno_1.nascimento.mes = 10;
    aluno_1.nascimento.ano = 2002;

    printf("Nascido em %d/%d/%d",aluno_1.nascimento.dia, aluno_1.nascimento.mes, aluno_1.nascimento.ano);

    return 0;
}