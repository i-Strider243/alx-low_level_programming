#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - entry point
 * Description: Check if random number is positive or negative
 * Return: always 0 (success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%lu is positive\n", n);
	else if (n == 0)
		printf("%lu is zero\n", n);
	else
		printf("%lu is negative\n", n);
	return (0);
}
