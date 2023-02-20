#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Dertimess if a number is positive, nagative or Zero.
 *
 * Return Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(tuime(0));
	n  = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d id negative\n", n);
	}
	return (0);
}
