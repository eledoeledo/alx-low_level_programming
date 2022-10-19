#include "main.h"

/**
*_islower - Write a function that checks if a char is lowercase
*@c: is the char to be check
*Return: 1 if char is lowercase, otherwise 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
