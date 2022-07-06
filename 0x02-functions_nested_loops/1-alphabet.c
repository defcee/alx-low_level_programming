#include "main.h"

/**
 * prints aplphabet in lower case followed by a new line
 *
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
