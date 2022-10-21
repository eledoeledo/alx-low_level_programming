#include "main.h"

/**
*print_line - function that draws a straight line in the terminal
*@n:integer in question
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
