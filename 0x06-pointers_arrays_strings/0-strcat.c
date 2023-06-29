#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - A function that concanates two strings
 * @dest: first string to concanate
 * @src: second string to concanate
 * Return: A pointer to the resulting string
 */
int main(void)
{
	char s1[] = "Hello ";
	char s2[] = "World!\n";

	strcat(s1, s2);
	printf("final string is: %s ", s1);
	return 0;
}


