/* Preprocessors */
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: ptr, string to check
 * @needle: ptr, string to be searched for in @haystack
 * Return: pointer to the first occurence of @needle in @haystack,
 * otherwise null
 */

char *_strstr(char *haystack, char *needle)
{
	/* declarations */
	char *needle_, *haystack_;

	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
