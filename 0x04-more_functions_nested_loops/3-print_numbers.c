#include "main.h"

/**
*print_numbers - function that prints the numbers, from 0 to 9
*Return: Void
*/

void print_numbers(void)
{
	char o = 0;

	while (o <= 9)
	{
		_putchar(o + '0');
		o++;
	}
	_putchar('\n');
}
