#include <stdio.h>
#include "main.h"
/**
 * set_string - A function that sets the value of a pointer to a string
 * @s: the value of the pointer
 * @t: the destination string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
