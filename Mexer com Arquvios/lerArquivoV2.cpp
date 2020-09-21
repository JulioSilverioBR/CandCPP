#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

        ifstream input("Texto.txt");

        string textoLido;

        for(string line; getline(input, line);){
            textoLido += line + "\n";
        }

        cout << textoLido;

    return 0;
}