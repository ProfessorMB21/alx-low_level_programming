/* Preprocessors */
#include <stdio.h>
#include <stdlib.h>

/**
 *  main - Prints the name of program to stdout, followed by a newline
 *  @argc: Number of arguments passed
 *  @argv: ptr, Array of arguments
 * Return: 0 (success)
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("\"%s\"\n", argv[0]);
	return (0);
}
