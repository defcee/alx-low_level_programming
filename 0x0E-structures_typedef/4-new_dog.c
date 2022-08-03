#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0, k;
dog_t *poppy;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
poppy = malloc(sizeof(dog_t));
if (poppy == NULL)
{
free(poppy);
return (NULL);
}
poppy->name = malloc(i *sizeof(poppy->name));
if (poppy->name == NULL)
{
free(poppy->name);
free(poppy);
return (NULL);
}
for (k = 0; k <= i; k++)
poppy->name[k] = name[k];
poppy->age = age;
poppy->owner = malloc(j *sizeof(poppy->owner));
if (poppy->owner == NULL)
{
free(poppy->owner);
free(poppy->name);
free(poppy);
return (NULL);
}
for (k = 0; k <= j; k++)
poppy->owner[k] = owner[k];
return (poppy);
}
