#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char and
 * assigns it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *par;
	unsigned int i;

	par = malloc(sizeof(char) * size);

	if (size == 0 || par == NULL)
		return (NULL);

	for  (i = 0; i < size; i++)
		par[i] = c;
	return (par);
}
