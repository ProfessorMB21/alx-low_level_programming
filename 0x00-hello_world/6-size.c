#include <stdio.h>

/**
 * main - This program prints the sizes of various types on the machine it
 * 	  is compiled and run on.
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	float f;
	long int li;
	long long int lli;
	char c;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of an float: %d byte(s)\n", sizeof(float));
	return (0);
}
