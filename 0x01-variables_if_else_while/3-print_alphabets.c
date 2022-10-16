#include <stdio.h>

/**
*main - Prints lower and upper case alphabets
*Return: Always 0 (Success)
*/

int main(void)
{
	char lolo;

	for (lolo = 'a'; lolo <= 'z'; lolo++)
	{
		putchar(lolo);
	}
	for (lolo = 'A'; lolo <= 'Z'; lolo++)
	{
		putchar(lolo);
	}
	putchar('\n');
	return (0);
}
