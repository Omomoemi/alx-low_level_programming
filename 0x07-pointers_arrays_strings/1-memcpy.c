#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: destion memory
 * @src: source memory
 * @n: number of bytes
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
