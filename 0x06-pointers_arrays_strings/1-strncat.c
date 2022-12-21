#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: string
 * @dest:string
 * @n: number of bytes to concatenate
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}

