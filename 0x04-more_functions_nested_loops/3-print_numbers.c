#include "main.h"

/**
*print_numbers - function that prints the numbers, from 0 to 9
*Return: Void
*/

void print_numbers(void)
{
	char lolo;

	while (lolo <= 9)
	{
		_putchar(lolo + '0');
		lolo++;
	}
}
