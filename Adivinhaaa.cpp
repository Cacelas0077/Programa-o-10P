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
	int num, Atempt;
	num = rand() % 99 + 1;
	do {
		cout << "Diz me um número:";
		cin >> Atempt;
		if (Atempt < num) {
			cout << "O número está acima :( \n";
		}
		if (Atempt > num) {
			cout << "O número está abaixo :( \n";
		}
	} while (Atempt != num);
	cout << "O número está correto :D \n";

	return 0;

}