#include "main.h"

/**
*print_diagsums - function that prints the sum of the two diagonale
*@a:The chessboard to be printed
*/

void print_diagsums(int *a, int [6])
{
	int i, j;

	for (i = 0; a[i][5]; i++)
	{
		for (j = 0; j < 6; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
