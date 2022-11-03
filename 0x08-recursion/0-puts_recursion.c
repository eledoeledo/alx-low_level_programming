#include "main.h"

/**
*_puts_recursion - write a function that prints a string
*@s:Char
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

