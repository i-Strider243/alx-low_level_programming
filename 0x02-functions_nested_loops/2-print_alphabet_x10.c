#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: prints alphabets in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int j = 0;

	while (j <= 10)
	{
		int n = 97;

		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
	_putchar('\n');
	j++;
	}
}
