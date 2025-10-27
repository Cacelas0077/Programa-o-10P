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
	int num[10] = { 15, 7, 54, 12, 1, 2, 5, 23, 14, 4 };
	int troca, aux;

		do
		{
			troca = 0;
			for (int i = 0; i < 9; i++)
			{
				if (num[i] > num[i + 1])
				{
					troca++;
					aux = num[i];
					num[i] = num[i + 1];
					num[i + 1] = aux;
				}
			}
		} while (troca != 0);
		for (int i = 0; i < 10;i++)
		{
			cout << num[i] << "\n";
		}

}