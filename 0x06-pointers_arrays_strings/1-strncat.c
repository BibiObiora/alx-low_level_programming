#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: string
 * @dest:string
 * @n: the length of int
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
