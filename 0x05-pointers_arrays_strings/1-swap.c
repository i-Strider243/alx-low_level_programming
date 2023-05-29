#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer variable
 * @b: integer variable
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int g;

	g = *a;
	*a = *b;
	*b = g;
}
