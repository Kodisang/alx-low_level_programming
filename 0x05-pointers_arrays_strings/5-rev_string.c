#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string parameter input
 * Return: Nothing
 */

void rev_string(char *s)
{
	char s[10] = "main.h"

		printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
