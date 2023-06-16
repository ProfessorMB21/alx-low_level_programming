/* Preprocessors */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints whether a number is positive, negative or zero
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	/* Declarations */
	int n;

	/*Seed the value */
	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
