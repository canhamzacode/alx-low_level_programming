#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: param 1
 * @name: param 2
 * @age: param 3
 * @owner: param 4
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
