#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: char string to concatenate
 * @src: char string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
