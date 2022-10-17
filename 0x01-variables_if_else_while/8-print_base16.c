#include <stdio.h>

/**
*main - prints all the numbers of base 16 in lowercase
*Return: Always 0 (Success)
*/

int main(void)
{
	int num;
	char lo;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	for (lo = 'a'; lo <= 'f'; lo++)
	{
		putchar(lo);
	}
	putchar('\n');
	return (0);
}
