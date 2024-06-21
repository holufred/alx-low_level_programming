#include <stdio.h>
/**
 * main - Prints all unique combinations of two different digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar('0' + digit1);  /* Print the first digit */
			putchar('0' + digit2);  /* Print the second digit */
			if (!(digit1 == 8 && digit2 == 9))
			{
				putchar(',');  /* Print a comma */
				putchar(' ');  /* Print a space */
			}
		}
	}
	putchar('\n');  /* Print a newline after all combinations */
	return (0);  /* Return 0 to indicate success */
}
