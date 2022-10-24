#include "main.h"

/**
*_strlen - Write a function that returns the length of a string
*@s:string to check
*Return: int
*/

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
