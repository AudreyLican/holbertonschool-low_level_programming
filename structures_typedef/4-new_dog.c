#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s : pointer
 *
 * Return: return value
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - unction that copies the string pointed
 * @dest : pointer to dest, variable to stock copy of src
 * @src : pointer to src value
 * Return: dest with null byte
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name : the dog name
 * @age : the dog age
 * @owner : the dog owner
 *
 * Return: pointer new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->name = malloc(_strlen(name) + 1);
	if (puppy->name == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(_strlen(owner) + 1);
	if (puppy->owner == NULL)
	{
		free(puppy->owner);
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	_strcpy(puppy->name, name_strcpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}
