#include "main.h"
void _puts(char *str);

/**
 * _puts - prints out a string followed by a new line
 * @str: String variable
 * Returns: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
