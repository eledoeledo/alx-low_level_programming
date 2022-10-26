#include "main.h"

/**
**_strncat - Write a function that concatenates two strings
*@dest:Char
*@src:Char
*@n:Number of byte
*Return: A pointer to the result string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int lenDest = 0;

	while (lenDest[i++])
	{
		lenDest++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[lenDest++] = src[i];
	}
	return (dest);
}
