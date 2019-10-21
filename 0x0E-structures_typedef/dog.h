#ifndef Z
#define Z

/**
* struct dog - define a nwe type of dog
* @name: name of dog
* @owner: owner of dog
* @age: dog's age
*/

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
