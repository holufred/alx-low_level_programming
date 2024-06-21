#include <stdio.h>
/**
 * main - Prints all unique combinations of three different digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar('0' + digit1);  /* Print the first digit*/
				putchar('0' + digit2);  /* Print the second digit*/
				putchar('0' + digit3);  /* Print the third digit*/
				if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
				{
					putchar(',');  /* Print a comma*/
					putchar(' ');  /* Print a space*/
				}
			}
		}
	}
	putchar('\n');  /* Print a newline after all combinations */
	return (0);
}
