#include <stdlib.h>
	#include "dog.h"


/**
 * free_dog - Frees memory allocated for a dog struct
 * @d: Pointer to the dog struct to free
 *
 * Description: This function frees the memory allocated for a dog struct,
 *              including the memory allocated for the dog's name and owner.
 *              If the dog struct pointer is NULL, this function does nothing.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
