#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

    int main(){
        
    //Definição de variaveis
    int matriz[2][2],aux;

    //Le Valores
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cin >> matriz[i][j];
        }
        
    }
    //Mostra valores  digitados
    cout << "Valores Antes da Troca\n" ;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    //Troca de valores
    aux = matriz[0][0];
    matriz[0][0] = matriz[1][0] ;
    matriz[1][0] = aux;

    aux = matriz[0][1];
    matriz[0][1] = matriz[1][1] ;
    matriz[1][1] = aux;

    //Valores Trocados
    cout << "Valores Trocados\n" ;

     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           cout<< matriz[i][j] << " ";
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}