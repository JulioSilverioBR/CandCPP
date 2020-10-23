#include <stdlib.h>
#include <new>
#include <iostream>
#include <string>

using namespace std;

struct pessoa 
{
    string nome;
    int RG;
    struct pessoa  *proximo;
};

int retornaTamanho(pessoa *ponteiroEncadeado){

    int tamanho = 0 ;

    if (ponteiroEncadeado->nome == "")
    {
        return 0;
    }
    

    pessoa *p = ponteiroEncadeado;

    while (p != NULL)
    {
        //atualiza o cursor
        p = p->proximo;
        tamanho++;
    }
    return tamanho;
    
}

void imprimeEncadeada(pessoa *ponteiroEncadeado){

    pessoa *p = ponteiroEncadeado;
    cout << "\n";
    while (p != NULL)
    {
        cout << "|Nome: " << p->nome << " RG: " << p->RG <<"|\n";
        p = p->proximo;
    }
    cout << "\n";
}

void adcComecoEncadeada(pessoa *&ponteiroEncadeado,string nome, int rg){
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->RG = rg;

    if (ponteiroEncadeado->nome == "")
    {
        novoValor->proximo == NULL;
    }else
    {
        novoValor->proximo = ponteiroEncadeado;
    }
    
    

    //Redirecionando Ponteiro
    ponteiroEncadeado = novoValor;
}

void adcFimEncadeada(pessoa *&ponteiroEncadeado, string nome, int rg){
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->RG = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeado;
    //Quando chega no ultimo elemento faz apontar para o novo valor
      while (p != NULL)
    {
        if(p->proximo == NULL){
           p->proximo = novoValor;
           //acha o valor e retorna para o main
           return;
    }
    p = p->proximo;
}

}

void adcPosicaoEncadeada(pessoa *&ponteiroEncadeado, string nome, int rg, int posicao){
    pessoa *novoValor = new pessoa;
    novoValor->nome = nome;
    novoValor->RG = rg;
    novoValor->proximo = NULL;

    pessoa *p = ponteiroEncadeado;
    
    for (int i = 0; i <= posicao; i++)
    {
        if(i == posicao - 1 ){
            //auxiliar pessoa
            pessoa *aux = new pessoa;

            aux->proximo = p->proximo;
            p->proximo =  novoValor;
            novoValor->proximo = aux->proximo;

            free(aux);
        }

        p = p->proximo;
    }
    
}

void remComecoEncadeada(pessoa *&ponteiroEncadeado){
    //Faz o ponteiro principal apontar pro proximo valor
    if (ponteiroEncadeado->proximo == NULL)
    {
        pessoa *novoValor = new pessoa;
        novoValor->nome = "";
        novoValor->RG = 0;
        novoValor->proximo = NULL;
        
        ponteiroEncadeado = novoValor;
    }else
    {
        ponteiroEncadeado = ponteiroEncadeado->proximo;
    }
}

void remFimEncadeada(pessoa *&ponteiroEncadeado){
    //Auxiliares
    pessoa *p = new pessoa;
    pessoa *aux = new pessoa;

    p = ponteiroEncadeado;

    while (p->proximo != NULL)
    {
        aux = p;
        p = p->proximo;
    }
    aux->proximo = NULL;

}

void remPosicaoEncadeada(pessoa *&ponteiroEncadeado, int posicao){
    //Ponteiro cursor auxiliar
    pessoa *p = ponteiroEncadeado;

    int i = 0;
    while (i <= posicao)
    {
        if (i == posicao - 1)
        {
            //Cria um auxiliar
            pessoa *aux = new pessoa;

            //Auxiliar Recebe 
            aux = p->proximo;
            //Faz com que o proximo pule um elemento
            p->proximo = aux->proximo;

            free(aux);
        }
        
        //Passa o cursor para o proximo 
        p = p->proximo;
        //Registra movimentacao
        i++;
    }
    

}

string retornaNomeEncadeada(pessoa *&ponteiroEncadeado, int rg){
    pessoa *p = ponteiroEncadeado;
    //Nome a ser retornado
    string nome = "Nome não encontrado";
    while (p != NULL)
    {
        if(p->RG == rg){
            nome = p->nome;
            return nome;
        }
        p = p->proximo; 
    }
    
}

void limpaTela(){
    system("CLS");
}

int main(){
    int funcDesejada = 1;

    //Cria o Inicio da Lista Encadeada
    pessoa *ponteiroEncadeado = new pessoa;
    ponteiroEncadeado->nome = "";
    ponteiroEncadeado->RG = 0;
    ponteiroEncadeado->proximo = NULL;

    while (funcDesejada < 9 && funcDesejada > 0)
    {
        cout << "Operacoes \n";
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

        cout << "\n\nTamanho atual: " << retornaTamanho(ponteiroEncadeado) << "\n";
        
        if (retornaTamanho(ponteiroEncadeado) == 0)
        {
            cout << "Lista Vazia" << "\n";
        }

        cout << "\nEscolha a Opcao: ";
        cin >> funcDesejada;

        limpaTela();
        
        //Variaveis para valores
        int rg;
        int posicao;
        string nome;
        
        switch (funcDesejada)
        {

        case 1:
            cout << "1 - Insercao de um node no inicio da lista\n";
            cout << "Nome: ";
            cin >> nome;
            cout << "RG: ";
            cin >> rg;
            adcComecoEncadeada(ponteiroEncadeado, nome, rg);
            break;

        case 2:
            cout << "2 - Insercao de um node no fim da lista\n";
            cout << "Nome: ";
            cin >> nome;
            cout << "RG: ";
            cin >> rg;

            if (retornaTamanho(ponteiroEncadeado) == 0)
            {
                adcComecoEncadeada(ponteiroEncadeado, nome, rg);
            }else{
                adcFimEncadeada(ponteiroEncadeado, nome, rg);

            }
            break;

        case 3:
            cout << "3 - Insercao de um node na posicao N\n";
            cout << "Posição: ";
            cin >> posicao;
            cout << "Nome: ";
            cin >> nome;
            cout << "RG: ";
            cin >> rg;

            if (posicao == 0)
            {
                adcComecoEncadeada(ponteiroEncadeado, nome, rg);
            }else if(posicao == retornaTamanho(ponteiroEncadeado) - 1){
                adcFimEncadeada(ponteiroEncadeado, nome, rg);
            }else
            {
                adcPosicaoEncadeada(ponteiroEncadeado,nome,rg,posicao);
            }
            break;

        case 4:
            cout << "4 - Retirar um node do inicio da lista\n";
                remComecoEncadeada(ponteiroEncadeado);
        break;

        case 5:
            cout << "5 - Retirar um node no fim da lista \n";
             if(retornaTamanho(ponteiroEncadeado) == 1){
                remComecoEncadeada(ponteiroEncadeado);
            }else
            {
                remFimEncadeada(ponteiroEncadeado);
            }
        break;

        case 6:
            cout << "6 - Retirar um node na posicao N \n";
            cout << "Posicao: ";
            cin >> posicao;
            if(posicao == 0){
                remComecoEncadeada(ponteiroEncadeado);
            }else if(posicao == retornaTamanho(ponteiroEncadeado) - 1){
                remFimEncadeada(ponteiroEncadeado);
            }else
            {
                remPosicaoEncadeada(ponteiroEncadeado, posicao);
            }
        break;

        case 7:
            cout << "7 - Procurar um node com o campo RG \n";
            cout << "RG Buscado pelo Usuario: ";
            cin >> rg;
            cout << "\nO nome do rg eh: " << retornaNomeEncadeada(ponteiroEncadeado, rg) << "\n\n";
        break;

        case 8:
            imprimeEncadeada(ponteiroEncadeado);
        break;
        }

    }
    return 0;
}