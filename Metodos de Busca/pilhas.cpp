#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

//Retorna quantas casas da pilha já foram usadas
int pilhaTamanho(int topo){
    return topo + 1;
}


//Imprime a  pilha
void imprimeVetor(int vetor[TAM],int topo){
     for (int i = 0; i < TAM; i++)
    {
       cout << vetor[i] << " | ";
    }
       cout << "\n";
       cout << "Tamanho da pilha: "<<  pilhaTamanho(topo);
       cout << "\n";

}

//Constroi/ Zera  a pilha
void pilha_construtor(int pilha[TAM], int *topo){

    *topo = -1;

    for (int i = 0; i < TAM; i++)
    {
       pilha[i] = 0;
    }
}

//Verifica se a pilha esta vazia
bool pilhaVazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

//Verifica o ultimo valor da pilha

int pilha_get(int pilha[TAM], int *topo){
    if(pilhaVazia(*topo)){
        cout << "A pilha esta vazia";
        return 0;
    }else{
        return pilha[*topo];
    }
}

//Verifica se a pilha esta cheia
bool pilhaCheia(int topo){
    if(topo == TAM - 1){
        return true;
    }else
    {
        return false;
    }
    
}

//Insere Valores
void pilhaPush(int valor,int pilha[TAM],int *topo){
     if(pilhaCheia(*topo)){
        cout << "Pilha Cheia";
    }else{
        *topo += 1;
        pilha[*topo] = valor;
    }
}
//Remove valores
void pilhaPop(int pilha[TAM],int *topo){
    if(pilhaVazia(*topo)){
        cout << "A pilha já esta vazia" <<  "\n";
    }else{
        cout << "Valor removido: " << pilha[*topo] << "\n";
        pilha[*topo] = 0;
        *topo -= 1;
    }
}

int main(){

    int topo;
    int pilha[TAM];

    pilha_construtor(pilha,&topo);

    imprimeVetor(pilha,topo);

    pilhaPush(7, pilha, &topo);
    cout << "Ultimo valor: " <<  pilha_get(pilha, &topo) << "\n";
    pilhaPush(5, pilha, &topo);
    pilhaPush(7, pilha, &topo);

    imprimeVetor(pilha,topo);

    pilhaPop(pilha,&topo);

    imprimeVetor(pilha, topo);


}