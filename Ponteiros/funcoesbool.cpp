#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <stdbool.h>
using namespace std;
    
    bool retornaBool(){
      return true;//true = 1/false = 0
    }

    int main(){
    
    bool varBooleana;
    varBooleana = retornaBool();

    if (varBooleana)
    {
        cout << "Verdadeiro\n";
    }else{
        cout << "Falso\n";
    }
    
    system("pause");
    return 0;
}