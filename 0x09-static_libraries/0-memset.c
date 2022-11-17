#include "main.h"

/**
**_memset - Write a function that fills memory with a constant byte
*@s:Char
*@b:Char
*@n:Int
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

