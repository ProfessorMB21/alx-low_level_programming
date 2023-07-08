/* Preprocessors */
#include <stdio.h>

/**
 * Prints the numbers of arguments passed into it
 * Return: 0 (success)
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	/* declarations */
	int count = 0;

	if (argc > 1)
	{
		while (count < argc - 1)
		{
			count++;
		}
		printf("%d\n", count);
	} else if (argc <= 1)
	{
		printf("%d\n", count);
	}
	return (0);
}
