#include "main.h"

/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*is written by eledo
*/

void print_alphabet_x10(void)
{
	int n;

	char m;

	for (n = 0; n < 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
