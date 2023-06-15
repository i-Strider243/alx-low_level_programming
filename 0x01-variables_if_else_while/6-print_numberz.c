#include <stdio.h>

/**
 * main - entry point
 * Description: Print numbers,
 * without using char
 * Return: 0 (success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
