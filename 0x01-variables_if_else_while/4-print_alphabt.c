#include <stdio.h>

/**
*main - Prints lower case alphabets except q and e
*Return: Always 0 (Success)
*/

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if ((m != 'q') && (m != 'e'))
		{
			putchar(m);
		}
	}
	putchar('\n');
	return (0);
}
