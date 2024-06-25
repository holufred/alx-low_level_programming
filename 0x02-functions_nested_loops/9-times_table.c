#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, product;

	for (num = 0; num <= 9; num++) /* Loop through numbers 0 to 9 */
	{
		for (mult = 0; mult <= 9; mult++) /* Loop for multiplying 'num' by 0 to 9 */
		{
			product = num * mult;
			if (mult == 0)
			{
				_putchar('0' + product);
			}
			else
			{_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar('0' + product);
				}
				else
				{
					_putchar('0' + product / 10);
					_putchar('0' + product % 10);
				}
			}
		}
		_putchar('\n');
	}
}
