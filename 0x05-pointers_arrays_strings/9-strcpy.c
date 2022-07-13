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
int index = 0;
for (index = 0; src[index] != '\0'; index++)
{
dest[index] = src[index];
}
dest[index] = '\0';
return (dest);
}
