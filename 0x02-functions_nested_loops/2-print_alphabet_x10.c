#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercas
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int count;
	char l;

	for (count = 0; count <= 9; count++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}


