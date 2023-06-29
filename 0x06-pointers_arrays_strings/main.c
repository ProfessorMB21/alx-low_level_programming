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
	
	printf("%s", _strcat(a, b));
	return (0);
}
