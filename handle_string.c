#include "main.h"
/**
 *handle_string - return how many characters we want to print in a string
 *@stg: string
 *Return: an integer
 */
int handle_string(char *stg)
{
	int i = 0;

	if (stg == NULL)
	{
		handle_string("(null)");
		return (1);
	}
	while (stg[i])
	{
		_putchar(stg[i]);
		i++;
	}
	return (i);
}
