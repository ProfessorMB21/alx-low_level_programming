#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: 0
 */

int main(void)
{
	int len;
	char *str, *str2;

	str = "Holberton!";
	str2 = "";
	printf("The length of str is %d and the length of str2 is %d\n", _strlen(str), _strlen(str2));

	return (0);
}
