#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0 success.
 */

int main(void)
{
	int n = 48;
	int s = 32;
	int c = 44;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(c);
			putchar(s);
		}
		n++;
	}
	return (0);
}
