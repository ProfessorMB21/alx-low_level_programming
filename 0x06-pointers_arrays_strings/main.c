#include <stdio.h>
#include "main.h"

/**
 * main - print
 *
 * REturn: 0
 */

int main(void)
{
	char a[] = "Hello world\n";

	printf("The initial string was: %s\n", a);
	printf("The string after modification: %s\n", string_toupper(a));
	return (0);
}
