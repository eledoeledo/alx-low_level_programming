#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Last digit
*Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{

