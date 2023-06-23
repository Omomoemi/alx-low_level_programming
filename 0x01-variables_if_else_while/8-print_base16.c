#include <stdio.h>
/**
 * main - A program that prints all digits in base 16
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int c;
	char letter;
	for (c = 0; c < 10; c++)
		putchar((c % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
	
