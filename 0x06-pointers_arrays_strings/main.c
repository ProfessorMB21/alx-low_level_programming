#include <stdio.h>
#include "main.h"

/**
 * main - print
 *
 * REturn: 0
 */

int main(void)
{
	char a[98] = "World\n";
	char s[] = "Hello\n";
	char b[] = "Hello World!\n";
	
	printf("%d\n", _strcmp(a, b));
	printf("%d\n", _strcmp(a, a));
	printf("%d\n", _strcmp(b, a));
	printf("%d\n", _strcmp(s, b));
	return (0);
}
