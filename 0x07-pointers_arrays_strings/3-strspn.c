#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to be scanned.
 * @accept: The string containing the list of characters to match in s.
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *start = accept;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (!found)
			break;
		count++;
		s++;
		accept = start;
	}
	return (count);
}
