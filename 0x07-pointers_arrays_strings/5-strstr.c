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
		/**
		 * using helping variables 
		 * to assist returning one 
		 * of the argument pointers
		 */
		haystack_ = haystack;
		needle_ = needle;
		while (*needle_ != '\0' && *haystack_ == *needle_)
		{
			haystack_++;
			needle_++;
		}
		if (*needle_ == '\0')
		{
			return (haystack);
		}
		haystack++;
		
	}
	return (0);
}
