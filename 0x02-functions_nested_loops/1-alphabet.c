#include "main.h"

/**
 * print alphabets in lowerscase then a new line
 */
void print_alphabet(void)
{
	char ch;


	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;

	}
	_putchar('\n');
}
