#include <stdio.h>
/**
 * main - A program that prints all possible combinations
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;
	
	for (c = 0; c <= 9; c++)
	{
		putchar((c % 10) + '0');
		if (c == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
