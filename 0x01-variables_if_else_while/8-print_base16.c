#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all
 * the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: 0 (Success)
 */

int main(void)
{
	int m = 48;
	int n = 97;

	while (m <= 57)
	{
		putchar(m);
		m++;
	}

	while (n <= 102)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
