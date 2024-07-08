#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to find in the string.
 * Return: Pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return NULL;
}
