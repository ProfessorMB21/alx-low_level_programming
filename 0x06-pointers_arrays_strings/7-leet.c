/* Preprocessors */
#include "main.h"

/**
 * leet - Encodes a string by replacing letters with numbers
 *@str: ptr, string
 * Return: str
 */

char *leet(char *str)
{
	/* declarations */
	int i, j;
	char find[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		/**
		 * look through the find array
		 * and check if a character is
		 * equal to the character in
		 * str array at i and replace
		 * it with its corresponding
		 * value in the find array
		 */
		for (j = 0; find[j] != '\0'; j++)
		{
			if (str[i] == find[j])
			{
				str[i] = replace[j];
			}
		}
	}
	return (str);
}
