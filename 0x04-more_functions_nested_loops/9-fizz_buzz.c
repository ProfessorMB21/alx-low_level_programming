/* Preprocessors */
#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz test
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		} else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		} else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
	return (0);
}
