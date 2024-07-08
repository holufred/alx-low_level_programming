#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to be searched.
 * @needle: The substring to find.
 * Return: Pointer to the beginning of the located substring 
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr;
	char *needle_ptr;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		haystack_ptr = haystack;
		needle_ptr = needle;
		while (*haystack_ptr == *needle_ptr  && *needle_ptr != '\0')
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
