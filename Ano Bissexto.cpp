#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;


int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    if ((ano % 4 == 0) && (ano % 400 == 0) || (ano % 100 != 0))

    {

        cout << "O ano " << ano << " é bissexto" << endl;
    }
    else
    {
        cout << "O ano " << ano << " não é bissexto" << endl;

    }
    return 0;
}