#include <iostream>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM], int  tamanho){
    cout << "\n";

     for (int i = 0; i < TAM ; i++)
    {
       cout << vetor[i] << " | ";
    }
    cout << "\n" << "Tamanho: " << tamanho;

    cout << "\n";

}

void fila_construtor(int *frente, int *tras, int fila[TAM]){

    for (int i = 0; i < TAM; i++)
    {
       fila[i] = 0;
    }

    *frente = 0;
    *tras = -1;
}

bool fila_cheia(int tras){
    if(tras == TAM - 1){
        return true;
    }else{
        return false;
    }
}

void fila_emfilherar(int fila[TAM], int valor, int *tras){
    if(fila_cheia(*tras)){
        cout << "Fila Cheia" << "\n";
    }else{
    *tras +=1;
    fila[*tras] = valor;
    }
}
bool fila_vazia(int frente, int tras ){
    if(frente > tras){
        return true;
    }else{
        return false;
    }
}

void fila_desemfilherar(int fila[TAM], int *frente,int tras){

    if(!fila_vazia(*frente,tras)){
    cout << "O Valor "  << fila[*frente] << " Foi Removido\n";
    fila[*frente] = 0;
    *frente += 1;
    }
}

int fila_tamanho(int tras, int frente){
    return (tras - frente) + 1;
}

int main(){
    int fila[TAM];
    int frente, tras;
    int valor;
    
    
    fila_construtor(&frente, &tras, fila);

    fila_emfilherar(fila, 5, &tras);
    fila_emfilherar(fila, 8, &tras);

    imprimeVetor(fila, fila_tamanho(tras, frente));

    fila_desemfilherar(fila, &frente,tras);
    fila_desemfilherar(fila, &frente,tras);

    imprimeVetor(fila, fila_tamanho(tras, frente));

    fila_emfilherar(fila, 5, &tras);

    imprimeVetor(fila, fila_tamanho(tras, frente));

    return 0;
}