/* Preprocessors */
#include <stdio.h>
#include <stdlib.h>

/**
 * isNum - Checks if is a digit
 * @s: ptr, character
 * Return: 0 (success), otherwise 1
 */

int isNum(char *s)
{
	/* declarations */
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - Adds positive numbers
 * Return: 0 (success), otherwise 'Error' and returns 1
 */

int main(int argc, char *argv[])
{
	/* declarations */
	int i, count = 0;

	/**
	 * if no args passed prints
	 * 0 to stdout
	 */
	if (argc == 1)
	{
		count = 0;
		printf("%d\n", count);
	} else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (isNum(argv[i]) == 0)
			{
				count += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", count);
	}

	return (0);
}
