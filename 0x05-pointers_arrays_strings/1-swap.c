#include "main.h"

/**
*swap_int - Write a function that swaps the values of two integers.
*@a:pointer one
*@b:pointer two
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
