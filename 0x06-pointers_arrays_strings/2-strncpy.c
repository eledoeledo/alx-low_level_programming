#include "main.h"

/**
**_strncpy - Write a function that copies a string
*@dest:Char
*@src:Char
*@n:Maximum number of bytes to copied
*Return: Pointer to the result string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	int sr_l = 0;

	while (src[i++])
	{
		sr_l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = sr_l; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
