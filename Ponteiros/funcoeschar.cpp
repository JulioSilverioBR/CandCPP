#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stdbool.h>
using namespace std;
    
    char retornaLetra(){
        // Retornando x Pela Tabela ASCII
        return 120; 
        //return 'x';
    }


    int main(){
    char letra;
    letra = retornaLetra();

    cout << letra << "\n";
   
    system("pause");
    return 0;
}