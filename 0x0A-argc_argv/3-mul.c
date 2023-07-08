/* Preprocessors */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers followed by a newline
 * Return: 0 (success), otherwise print 'Error' and return 1
 */

int main(int argc, char *argv[])
{
	/* declarations */
	int i, count = 1;

	if (argc - 1 < 2 || argc - 1 > 2)
	{
		printf("Error\n");
		return (1);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			count *= atoi(argv[i]);
		}
		printf("%d\n", count);
	}
	return (0);
}
