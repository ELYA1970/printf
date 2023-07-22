#include "main.h"
/**
 * _putchar - print a character
 * @c: character
 * Return: integerlike a character in code ASCII
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
