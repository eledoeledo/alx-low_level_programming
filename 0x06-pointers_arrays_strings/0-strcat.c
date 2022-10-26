#include "main.h"

/**
**_strcat - Write a function that concatenates two strings
*@dest:String
*@src:String
*Return: pointer result string
*/

char *_strcat(char *dest, char *src)
{
	int i = 0;

	int lenDest = 0;

	while (lenDest[i++])
	{
		lenDest++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[lenDest++] = src[i];
	}
	return (dest);
}
