#include "main.h"
/**
 * factorial - A function that reurns the factorial of a given number
 * @n: the integer
 *
 * Return: 1 if fatorisl is less thsn 1 else return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
