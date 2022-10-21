#include "main.h"

/**
*print_diagonal - function that draws a diagonal line on the terminal
*@n:integer
*/

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\');
		n--;
	}
	_putchar('\n');
}
