#include "main.h"

/**
 * print_array - print array
 * @dest: character pointer
 * @src: character source
 *
 * Description: copies string pointed to by src
 * Return: return pointer
 */
char *_strcpy(char *dest, char *src)
{
int c = 0;
while (src[c] != '\0')
{
dest[c] = src[c];
c++;
}
dest[c] = src[c];
return (dest);
}
