#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers.
 * Returns: Always returns 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num1 % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
