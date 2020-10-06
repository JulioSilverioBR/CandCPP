
#include <iostream>
#include <string>
#include <stdlib.h>
#include <new>

using namespace std;

void limpaTela(){
    system("CLS");
}

struct pessoa
{
    string nome;
    int rg;
};

void imprimeSequencial(pessoa *ponteiroSequencial, int tamanhoLista){
    for (int i = 0; i < tamanhoLista; i++)
    {
        cout << "\n" << "|ID: " << i << "| Nome: " << ponteiroSequencial[i].nome << "| RG: " <<ponteiroSequencial[i].rg << "|"; 
    }
    cout << "\n";
}
//Ponteiro Com Escopo global
void adcComecoSequencial(pessoa *&ponteiroSequencial,string nome,int rg,int *tamanho){

    //Caso a lista ja tenha membros.
    pessoa *novaListaSequencial = new pessoa[*tamanho + 1];
    //Insere os novos elementos
    novaListaSequencial[0].nome = nome;
    novaListaSequencial[0].rg = rg;

    //Passa os valores antigos para o novo vetor
    for (int i = 0; i < *tamanho; i++)
    {
        novaListaSequencial[i + 1 ].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i + 1 ].rg = ponteiroSequencial[i].rg;
    }
    //Atualiza o ponteiro para lista nova
    ponteiroSequencial = novaListaSequencial;
    *tamanho = *tamanho+1;
}
//Ponteiro Com Escopo global
void adcFimSequencial(pessoa *&ponteiroSequencial,string nome,int rg,int *tamanho){
    

    //Cria uma lista com um tamanho maior
    pessoa *novaListaSequencial = new pessoa[*tamanho + 1];

    for (int i = 0; i < *tamanho; i++)
    {
        novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
    }

    //Posiciona o ultimo elemento

    novaListaSequencial[*tamanho].nome = nome;
    novaListaSequencial[*tamanho].rg = rg;

    //Atualiza o ponteiro para lista nova
    ponteiroSequencial = novaListaSequencial;
    *tamanho = *tamanho+1;
}
//Ponteiro Com Escopo global
void adcPosicaoSequencial(pessoa *&ponteiroSequencial,string nome,int rg,int *tamanho,int posicao){
    pessoa *novaListaSequencial = new pessoa[*tamanho + 1];

     for (int i = 0; i < posicao; i++)
    {
        novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
    }

    //Adiciona o novo registro na posição correta

    novaListaSequencial[posicao].nome = nome;
    novaListaSequencial[posicao].rg = rg;

    //Coloca o resto dos valores antigos
    for (int i = posicao + 1; i < *tamanho + 1; i++)
    {
        novaListaSequencial[i].nome = ponteiroSequencial[i - 1].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i - 1].rg;
    }
    //Atualizo  a Lista
     ponteiroSequencial = novaListaSequencial;
    *tamanho = *tamanho + 1; 
}

void removeListaSequencial(pessoa *&ponteiroSequencial, int *tamanho){
    pessoa *novaListaSequencial = new pessoa[*tamanho-1];

    for (int i = 1; i < *tamanho; i++)
    {
        novaListaSequencial[i - 1].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i - 1].rg = ponteiroSequencial[i].rg;
    }

     //Atualizo  a Lista
     ponteiroSequencial = novaListaSequencial;
    *tamanho = *tamanho - 1; 
}

void removeListaFimSequencial(pessoa *&ponteiroSequencial, int *tamanho){
    pessoa *novaListaSequencial = new pessoa[*tamanho-1];

 for (int i = 0; i < *tamanho - 1; i++)
    {
        novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
        novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
    }

       //Atualizo  a Lista
     ponteiroSequencial = novaListaSequencial;
    *tamanho = *tamanho - 1; 
}

void removePosicaoSequencial(pessoa *&ponteiroSequencial,int *tamanho,int posicao){
    pessoa *novaListaSequencial = new pessoa[*tamanho-1];

    for (int i = 0; i < *tamanho - 1 ; i++)
        {
            if(i < posicao){
                novaListaSequencial[i].nome = ponteiroSequencial[i].nome;
                novaListaSequencial[i].rg = ponteiroSequencial[i].rg;
            }else
            {
                novaListaSequencial[i].nome = ponteiroSequencial[i + 1].nome;
                novaListaSequencial[i].rg = ponteiroSequencial[i + 1].rg;
            }
            
        }
    //Atualizo  a Lista
     ponteiroSequencial = novaListaSequencial;
    *tamanho = *tamanho - 1; 

}

string retornaNomeSequencial(pessoa *&ponteiroSequencial,int *tamanho, int rg){
    string nome = "Nada encontrado";

    for (int i = 0; i < *tamanho; i++)
    {
        if(ponteiroSequencial[i].rg == rg){
            nome =  ponteiroSequencial[i].nome;
        }
    }
        return nome;
}

int main(){
    //Variaveis de Escolha
    int funcDesejada = 1;

    //Ponteiro para Lista Sequencial
    pessoa *ponteiroSequencial;

    //Tamanho da Lista
    int tamanhoLista = 0;



    while (funcDesejada < 9 && funcDesejada > 0)
    {
        cout << "\nOperacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";

        cin >> funcDesejada;
        limpaTela();

        string nome;
        int rg;
        
        switch (funcDesejada)
        {
        case 1:
            cout << "Funcao Escolhida 1 - Adicionar um node no começo da lista\n";

            cout << "Nome:";
            cin >>  nome;
            cout << "RG:";
            cin >> rg;
            adcComecoSequencial(ponteiroSequencial,nome,rg,&tamanhoLista);
            break; 
        case 2:
            cout << "Funcao Escolhida 2 - Adicionar um node no final da lista\n";

            cout << "Nome:";
            cin >>  nome;
            cout << "RG:";
            cin >> rg;
            //Caso a lista seja vazia 
            if (tamanhoLista == 0)
            {
                adcComecoSequencial(ponteiroSequencial,nome,rg,&tamanhoLista);
            }else
            {
                adcFimSequencial(ponteiroSequencial,nome,rg,&tamanhoLista);
            }
            break; 
        case 3:
            int posicao;
            cout << "Funcao Escolhida 3 - Adicionar um Node Na Posicao N \n";

            cout << "Nome:";
            cin >>  nome;
            cout << "RG:";
            cin >> rg;
            cout << "Posicao Escolhida: ";
            cin >> posicao;
            if(posicao == 0){
                adcComecoSequencial(ponteiroSequencial,nome,rg,&tamanhoLista);
            }else if(posicao == tamanhoLista - 1){
                adcFimSequencial(ponteiroSequencial,nome,rg,&tamanhoLista);
            }else
            {
                adcPosicaoSequencial(ponteiroSequencial,nome,rg,&tamanhoLista,posicao);
            }
            break; 
        case 4:
            cout << "4 - Retirar um node do inicio da lista \n";
            //Se a lista for vazia
            if(tamanhoLista == 0){
                cout << "\nLista vazia impossivel remover\n";
            }else
            {
                removeListaSequencial(ponteiroSequencial, &tamanhoLista);
                cout << "\nRetirado com Sucesso\n";
            }
            break; 
        case 5:
            cout << "5 - Retirar um node no fim da lista \n";
             //Se a lista for vazia
            if(tamanhoLista == 0){
                cout << "\nLista vazia impossivel remover\n";
            }else
            {
                removeListaFimSequencial(ponteiroSequencial, &tamanhoLista);
                cout << "\nRetirado com Sucesso\n";
            }
        break;
            case 6:
                cout << "Funcao Escolhida 6 - Retirar um node na posicao N \n";

                if(tamanhoLista == 0){
                    cout << "\nLista vazia impossivel remover\n";
                }else
                {
                    cout << "Posicao Escolhida: ";
                    cin >> posicao;
                    if(posicao == 0){
                        removeListaSequencial(ponteiroSequencial, &tamanhoLista);
                    }else if(posicao == tamanhoLista){
                        removeListaFimSequencial(ponteiroSequencial, &tamanhoLista);
                    }else
                    {
                        removePosicaoSequencial(ponteiroSequencial, &tamanhoLista, posicao);
                    }
                }
            break;
            case 7:
                cout << "7 - Procurar um node com o campo RG \n";
                if(tamanhoLista == 0){
                    cout << "\nLista vazia impossivel remover\n";
                }else{
                    cout << "RG: ";
                    cin >> rg;
                    cout << "\nNome: " << retornaNomeSequencial(ponteiroSequencial,&tamanhoLista, rg) << " RG: "<< rg <<  "\n";
                }

            break;
            case 8:
                imprimeSequencial(ponteiroSequencial,tamanhoLista);
            break;
        }
    }
    return 0;
}