#include <stdio.h>
#include "main.h"

/**
 * main - print
 *
 * REturn: 0
 */

int main(void)
{
	char *a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 29, 49, 59};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, 5);
	return (0);
}
