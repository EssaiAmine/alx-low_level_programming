#include "main.h"
	#include <unistd.h>
	/**
	 * function _putcharr -  function that prints the alphabet, in lowercase.
	 * followed by a new line, using putchar
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
