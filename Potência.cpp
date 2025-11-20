#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;


int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

   
        int base, expoente,resultado;

        cout << "Digite a base: ";
        if (!(cin >> base)) {
            cout << "Base inválida.\n";
         
        }

        cout << "Digite o expoente: ";
        if (!(cin >> expoente)) {
            cout<< "Entrada inválida para o expoente.\n";
        
        }

        
      resultado =pow(base, expoente);

       cout << base << " elevado a " << expoente << " = " << resultado << "\n";

        return 0;
    }
