#include "main.h"
/**
 * _strpbrk - A function that searches for a string
 * @s: input
 * @accept: input
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i) i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
		if (*(accept + i)  == '\0')
			return (s + i);
	}
	return (NULL);
}

