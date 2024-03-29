#include "main.h"

/**
 * print_sign - main entry point
 * Description: prints the sign of a number.
 * @n: The input number as an integer
 * Return: 1 is greater than zero, 0 is zero, -1 is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
