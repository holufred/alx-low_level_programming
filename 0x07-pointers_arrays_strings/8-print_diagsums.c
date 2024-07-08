#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the start of the matrix represented as a one-dimensional array.
 * @size: The size of the dimensions of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned long sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%lu, %lu\n", sum1, sum2);
}
