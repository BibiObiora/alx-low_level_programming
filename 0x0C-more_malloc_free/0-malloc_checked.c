#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: integer variable that holds the memory size
 *
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
