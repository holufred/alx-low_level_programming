#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to an array[8] of char[8] - an 8x8 array.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j != 7)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
