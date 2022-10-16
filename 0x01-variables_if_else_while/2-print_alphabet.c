#include <stdio.h>

/**
*main print alphabet in lowercase
*Return: Always 0 (Success)
*/

int main(void)
{
	char top;

	for (top = 'a'; top <= 'z'; top++);
	{
		putchar(top);
	}
	putchar('\n');
	return (0);
}
