#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The address of a pointer to a char.
 * @to: The char string to point to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
