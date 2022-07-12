#include "main.h"

/**
 * _puts -main entry.
 * @str: first parameter
 *
 * Description: prints a string
 * Return: Alwalys (0)
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
