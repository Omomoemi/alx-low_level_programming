#include <stdio.h>
#include "main.h"
/**
 * _strchr - A funtion that locates a character in a string
 * @s: the string to input
 * @c: the character to locate
 *
 * Return: the first of char in c or null if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}


