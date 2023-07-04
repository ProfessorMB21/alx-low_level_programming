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

	if (*needle == 0)
	{
		reurn (haystack);
	}
	while (*haystack != '\0')
	{
		/**
		 * using helping variables 
		 * to assist returning one 
		 * of the argument pointers
		 */
		haystack_ = haystack;
		needle_ = needle;
		while (*needle_ != '\0' && *haystack == *needle_)
		{
			haystack++;
			needle_++;
		}
		if (!*needle_)
		{
			return (haystack_);
		}
		haystack++;
		
	}
	return (0);
}
