#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stdbool.h>
using namespace std;
int retorna();
float retornaQ ();

    int main(){
    
    int a;

    a = retorna();
    cout << a << "\n" ;

    float b;
    b = retornaQ();
    cout << b << "\n" ;

    system("pause");
    return 0;
}

    //Funções que retornam valor
    int retorna (){
        return 10;
    }

     float retornaQ (){
        return 2.5;
    }

