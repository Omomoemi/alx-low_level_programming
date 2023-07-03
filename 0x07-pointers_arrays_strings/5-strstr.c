#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: new substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
