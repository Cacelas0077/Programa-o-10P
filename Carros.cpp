#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int num;
	string carros[3] = { "Volvo", "BMW", "Mercedes" };
	string sair = "n";

	do
	{
		cout << "Que carro queres escolher?\n";
		cin >> num;

		if (num < 0 || num>2)
		{
			cout << "Número inválido - escreve um número entre 0 e 2\n";
		}
		else
		{
			if (num == 0)
			{
				cout << carros[0] << "\n";
			}
			else if (num == 1)
			{
				cout << carros[1] << "\n";
			}
			else if (num == 2)
			{
				cout << carros[2] << "\n";
			}
			cout << "Deseja sair? (s/n)\n";
			cin >> sair;
		}
	} while (sair == "n");
	cout << "Xau :3\n";

	return 0;
}
