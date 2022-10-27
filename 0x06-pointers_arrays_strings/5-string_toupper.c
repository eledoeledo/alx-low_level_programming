#include "main.h"

/**
**string_toupper - changes all lowercase letters of a string to uppercase
*@stri:Char to be changed
*Return: pointer to the changed string
*/

char *string_toupper(char *stri)
{
	int i = 0;

	while (stri[i])
	{
		if (stri[i] >= 'a' && stri[i] <= 'z')
		{
			stri[i] -= 32;
		}
		i++;
	}
	return (stri);
}
