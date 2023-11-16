#include "dog.h"
#include <stdlib>
#include <stdio.h>

int	_strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
* new_dog - function that creates a new dog
* @name : the dog name
* @age : the dog age
* @owner : the dog owner
*
* Return: pointer new_dog
*/

dog_t	*new_dog(char *name, float age, char *owner)
{
	char	*puppy;
	int	name_len;
	int	owner_len;

	name_len = 0;
	owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->name = malloc(name_len * sizeof(char));

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->name = _strcpy(puppy->name, name);
	puppy->age = age;

	puppy->owner = malloc(owner_len * sizeof(char));

	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	puppy->owner = _strcpy(puppy->owner, owner);

	return (puppy);
}

/**
* _strlen - function that returns the length of a string
* @s : pointer
*
* Return: return value
*/
int	_strlen(char *s)
{
	int	i;

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
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
