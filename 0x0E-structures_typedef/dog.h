#ifndef DOG_H
#define DOG_H

/**
 *dog - structthat list information of pet
 *@name: pet name
 *@age: pet age
 *@owner: pet owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog - rename strucut with typedef
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
