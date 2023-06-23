#include <stdio.h>
/**
 * main - A program that prints all single digits in base 10
 * Return: always 0 (success)
 */
int main(void)
{
	int a;
	for (a = 0; a <= 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}

