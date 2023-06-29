#include <stdio.h>
#include "main.h"

/**
 * main - print
 *
 * REturn: 0
 */

int main(void)
{
	char a[98];
	char b[] = "Hello World!\n";
	
	printf("%s\n", _strncpy(a, b, 5));
	printf("%s", _strncpy(a, b, 90));
	return (0);
}
