#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * number stored in the variable n
 * Return : Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 == )
		printf("0\n");
	else if (n % 10 > 5)
		printf("greater than 5\n");
	else 
		printf("and is less than 6 and not 0\n");

	return (0);
}
