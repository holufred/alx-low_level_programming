#include <stdlib.h>
#include <time.h>
/**
 * Main - returns a value
 *
 * Return: Always 0.
 */
int main(void)
{
       	int n;
	srand(time(0)); // Seed the random number generator
       	n = rand() - RAND_MAX / 2; // Assign a random number to n
	/* your code goes there */
	if (n > 0)
	{
		printf("The number %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("The number %d is zero\n", n);
	}
	else
	{
		printf("The number %d is negative\n", n);
	}
	return (0);
}
