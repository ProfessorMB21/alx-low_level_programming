/* Preprocessors */
#include "main.h"

/**
 * print_chessboard - Prints the chessboard to stdout
 * @a: ptr, array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	/* declarations */
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	}
}
