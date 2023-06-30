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
	char str[] = "my goodness 13i was gonna ask you The same thing\n";
	char *ptr;

	ptr = leet(str);

	printf("The initial string was: %s\n", str);
	printf("The string after modification: %s\n", ptr);
	return (0);
}
