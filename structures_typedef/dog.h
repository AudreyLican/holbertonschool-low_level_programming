#ifndef _DOG_H_
#define _DOG_H_

/**
* struct dog - dogs information
* @name : name of dog
* @age : age of dog
* @owner : dog master
*/

struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

/**
* my_dog - Typedef for dog struct
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
