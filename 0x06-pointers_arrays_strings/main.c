#include <stdio.h>
#include "main.h"

/**
 * main - print
 *
 * REturn: 0
 */

int main(void)
{
	char a[98] = "Hello ";
	char b[] = "World!\n";
	
	printf("%s", _strncat(a, b, 2));
	printf("%s", _strncat(a, b, 1024));
	return (0);
}
