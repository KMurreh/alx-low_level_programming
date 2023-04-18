#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Description: This function prints the contents of a struct dog
 * including the dog's name, age, and owner. If an element of d is NULL,
 * it prints "(nil)" instead of that element.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		char *name = d->name != NULL ? d->name : "(nil)";
		float age = d->age;
		char *owner = d->owner != NULL ? d->owner : "(nil)";

		printf("Name: %s\n", name);
		printf("Age: %.6f\n", age);
		printf("Owner: %s\n", owner);

	}	
}
