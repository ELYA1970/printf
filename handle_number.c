#include "main.h"
/**
 * length - give the length of a number
 * @number: an integer
 * Return: return the length of number
 */
int length(int number)
{
	if (number == 0)
		return (0);
	return (1 + length(number / 10));
}

/**
 * handle_number - print numbers
 * @number: an integer
 * Return: an integer printed
 */
int handle_number(int number)
{
	int likay7seb = 0;

	if (number < 0)
	{
		likay7seb++;
		_putchar('-');
		number = -number;
	}
	likay7seb += length(number);
	if (number >= 10)
	{
		handle_number(number / 10);
		handle_number(number % 10);
	}
	else
	{
		_putchar(number + '0');
	}
	return (likay7seb);
}
