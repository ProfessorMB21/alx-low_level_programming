/* Preprocessors */
#include <unistd.h>

/**
 * _putchar - prints a character to the terminal
 *
 * Return: 0 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
