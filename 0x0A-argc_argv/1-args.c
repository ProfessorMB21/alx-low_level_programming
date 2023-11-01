/* Preprocessors */
#include <stdio.h>

/**
 * main - Prints the numbers of arguments passed into it
 * @argc: Number of passed arguments
 * @argv: ptr, array of arguments
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
