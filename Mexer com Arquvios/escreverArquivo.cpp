#include <fstream>
#include <iostream>
#include <string.h>

using namespace std;

int main(){

    //Cria o objeto do arquivo
    ofstream arquivoDeSaida;

    //Abre o arquivo
    arquivoDeSaida.open("Texto.txt", std::ios_base::app);

    //Escreve algo
    arquivoDeSaida << " Teste\n";

    //Fecha arquivo
    arquivoDeSaida.close();
    return 0;
}