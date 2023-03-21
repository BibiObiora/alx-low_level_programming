#include <unistd.h>

/**
 *  * _putchar - prints out a character to the stdout
 *   * @c: character to be printed
 *   * Return: an integer when
 *   */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
