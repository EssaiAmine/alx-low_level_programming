#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

	void print_dog(struct dog *d)
/**
 * print_dog - Prints the properties of a dog
 * @d: Pointer to the struct dog to print
 * Description: This function prints the name, age, and owner of a dog
*/
	{
		if (d == NULL)
			return;


		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";


		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
