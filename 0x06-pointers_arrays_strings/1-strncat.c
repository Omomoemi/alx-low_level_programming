#include "main.h"
/**
 * _strncat - A function that concatenate two strimgs, which does not need to be null terminated
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string to concatenate
 *
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
