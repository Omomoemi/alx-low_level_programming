#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: the string to return
 *
 * Return: 0 always
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
