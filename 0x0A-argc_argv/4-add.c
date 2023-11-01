/* Preprocessors */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed
 * @argv: ptr, Array of arguments
 * Return: 0 (success), otherwise 'Error' and returns 1
 */

int main(int argc, char *argv[])
{
	/* declarations */
	int i, j, count = 0;

	/**
	 * if no args passed prints
	 * 0 to stdout
	 */
	if (argc == 1)
	{
		printf("%d\n", count);
	} else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			count += atoi(argv[i]);
		}
		printf("%d\n", count);
	}
	return (0);
}
