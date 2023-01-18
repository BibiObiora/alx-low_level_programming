#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print 
 * @f: pointer to the printing function
 * Return: no return cause we have declared VOID as R_TYPE
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
