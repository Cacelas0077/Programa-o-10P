#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num=-1, Atempt=0;
	int num = rand() % 99 + 1;
	int Tente;
	do {
		cout << "Diz me um número:";
		cin >> Atempt;
		if (Atempt < num) {
			cout << "O número está acima :(\n";
		}
		if (Atempt > num) {
			cout << "O número está abaixo :(\n";

		}
	} 
	while (Atempt != num);
	cout << "O número está correto :D \n";
	
	{
		if (Tente < 6)
		{
			cout << "\nWELL DONE!!, acertaste só em " << Tente << " tentativas. BEM JOGADOOOO.";
		}
		else if (Tente < 10)
		{
			cout << "\nMuito bem, acertaste em " << Tente << " tentativas.";
		}
		else
		{
			cout << "\nA tua mente é igual ao teu pai, foi-se embora em " << Tente << " tentativas";
		}

		}

}


	return 0;
}