#include <stdio.h>

/**
 * main - This program prints the sizes of various types on the run machine. 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	float f;
	long int li;
	long long int lli;
	char c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
