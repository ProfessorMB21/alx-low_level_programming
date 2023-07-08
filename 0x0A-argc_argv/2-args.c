/* Preprocessors */
#include <stdio.h>

/**
 * main - Prints all arguments it receives to stdout
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	/* declarations */
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
