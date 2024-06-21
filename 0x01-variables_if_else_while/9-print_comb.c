#include <stdio.h>
/*
 * main - Prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)/* Loop through numbers 0 to 9 */
	{
		putchar('0' + num);  /* Convert num to ASCII and print it */
		if (num < 9)  /* Check if the current number is less than 9 */
		{
			putchar(',');  /* Print comma */
			putchar(' ');  /* Print space */
		}
		num++;  /* Increment num to get the next digit */
	}
	putchar('\n');  /* Print a newline character after all numbers */
	return (0);  /* Return 0 to indicate success */
}

