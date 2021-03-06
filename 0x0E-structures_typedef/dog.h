#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dffgd
 * @name: fdsgd
 * @age: fdgd
 * @owner: fdfgfds
 *
 * Description: dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);

#endif
