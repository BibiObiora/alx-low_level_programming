#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @c: occurence of the character
 * @s: string to search
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
