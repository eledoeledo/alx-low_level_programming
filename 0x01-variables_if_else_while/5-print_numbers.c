#include <stdio.h>

/**
*main - prints all single digit numbers of base 10 starting from 0
*Return: Always 0 (Success)
*/

int main(void)
{
	int toto;

	for (toto = 0; toto < 10; toto++)
	{
		printf("%d", toto);
	}
	printf("\n");

	return (0);
}
