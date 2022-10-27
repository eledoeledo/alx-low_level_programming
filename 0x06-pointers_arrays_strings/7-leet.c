#include "main.h"

/**
**leet - Write a function that encodes a string into 1337
*@stri:String who be encoded
*Return: The pointer to the encoded string
*/

char *leet(char *stri)
{
	int i = 0;

	int j;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (stri[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (stri[i] == leet[j] || stri[i] - 32 == leet[j])
			{
				stri[i] = j + '0';
			}
		}
		i++;
	}
	return (stri);
}
