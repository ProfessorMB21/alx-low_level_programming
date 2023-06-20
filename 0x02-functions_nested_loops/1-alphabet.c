/* Preprocessors */
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase using user defined header
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	/* declarations */
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
