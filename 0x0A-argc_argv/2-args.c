#include "main.h"
#include <stdio.h>
/**
 * main - A function that prints all the arguments it receives
 * @argc: Number of command line arguments
 * @aargv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}