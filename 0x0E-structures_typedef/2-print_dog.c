#include <stdio.h>
	#include <stdlib.h>
	#include "dog.h"


/**
 * print_dog - prints the details of a dog
 * @d: pointer to a struct dog containing the details of the dog to print
 *
 * Description: This function prints the name, age, and owner of a dog. If any
 * of these values are NULL, it is printed as (nil).
 */
	void print_dog(struct dog *d)
	{
		if (d == NULL)
			return;


		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";


		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

