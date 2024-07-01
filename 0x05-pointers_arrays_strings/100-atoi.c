#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int index = 0;
	int result = 0;
	int sign = 1;

	while (s[index] != '\0' && (s[index] < '0' || s[index] > '9')) 
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		index++;
	}
	while (s[index] != '\0' && s[index] >= '0' && s[index] <= '9')
	{
		if (result > (2147483647 / 10) || (result == 2147483647 / 10 && s[index] - '0' > 7))
		{
			if (sign == 1) return (2147483647);
			else return (-2147483648);
		}
		result = result * 10 + (s[index] - '0');
		index++;
	}
	return (result * sign);
}
