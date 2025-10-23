#include <iostream>
#include <locale.h>
#include  <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");

	int N, maior = 0, menor = 2147483647;

	do
	{
		cout << "Escreve um número: ";
		cin >> N;

		if (N < menor && N != 0)
		{
			menor = N;
		}
		if (N > maior)
		{
			maior = N;
		}

	} while (N != 0);

	cout << "O maior número é: " << maior << "\n";
	cout << "O menor número é: " << menor << "\n";


	return 0;
}