#include "main.h"
/**
 * swap_int - A function that swaps the value of two integers
 * @a: pointer to print first variable
 * @b: pointer to print second variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
