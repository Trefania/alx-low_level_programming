#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog - is the structure dog
 * @name - is the attribute of dog's name
 * @age - attribute of dog's age
 * @owner - attribute of dog's owner
 */

struct dog
{
	char * name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
