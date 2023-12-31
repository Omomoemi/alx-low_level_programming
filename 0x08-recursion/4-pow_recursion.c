#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x
 * @x: first integer
 * @y: second integer
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
