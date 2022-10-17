#include <stdio.h>

/**
*main - prints all possible combinations of single-digit numbers
*Return: Always 0 (Success)
*/

int main(void)
{
	int neg;

	for (neg = 48; neg < 58; neg++)
	{
		putchar(neg);
		if (neg != 57)
		{
			putchar(',');
			putchar(' ');
		}
	
       	}
	putchar('\n');
	return (0);
}
