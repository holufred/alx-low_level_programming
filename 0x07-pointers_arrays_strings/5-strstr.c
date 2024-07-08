#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The main string to be searched.
 * @needle: The substring to find.
 * Return: Pointer to the beginning of the located substring, 
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h_start, *n_start;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		h_start = haystack;
		n_start = needle;
		while (*h_start && *n_start && *h_start == *n_start)
		{
			h_start++;
			n_start++;
		}
		if (!*n_start)
			return (haystack);
		haystack++;
	}
	return (0)
}
