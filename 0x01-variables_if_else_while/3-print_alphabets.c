#include <stdio.h>

/**
 * main - entry point
 * Description: Prints the alphabet in lowercase, and then in uppercase.
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
