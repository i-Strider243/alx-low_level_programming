#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: 'Prints the alphabet in lowercase, followed by a new line.'
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
