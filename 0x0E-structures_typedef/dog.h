#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog
 * @name: a pointer to a character array rep the name of the dog
 * @age: a floating-point value rep dog age
 * @owner: a pointer to a character array rep the owner of the dog
 *
 * Description: This struct rep a dog and contains its name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
