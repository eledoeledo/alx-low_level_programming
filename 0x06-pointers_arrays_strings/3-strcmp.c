#include "main.h"

/**
*_strcmp - a function that compares two strings
*@s1:Char 1
*@s2:Char 2
*Return: If str1 < str2, the negative difference of
*the first unmatched characters
*If s1 == s2, 0
*If s1 > s2, the positive difference of
*the first unmatched characters.
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
