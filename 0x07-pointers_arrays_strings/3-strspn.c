#include "main.h"
/**
 * _strspn - A function that gets the lenght of a prefix substring
 * @s: first value - char
 * @accept: second value - char
 *
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int j =0, int i = 0;
	unsigned int a = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				a++;
			j++;
		}
		i++;
		j = 0;
	}
	return (a);
}


