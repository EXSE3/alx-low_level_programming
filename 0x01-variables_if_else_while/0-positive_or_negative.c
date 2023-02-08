#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This program do the following things :
 * generate a random number
 * tells us if the number is positive, negative or null
 */

int main(void)
{
	int n;

	srand(time(0)); 
	n = rand() - RAND_MAX / 2;

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
		printf("%d is negative\n", n);
	}
	return (0);
}
