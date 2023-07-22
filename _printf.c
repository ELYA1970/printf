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
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (!format || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += _putchar(c);
			}
			else if (*format == 's')
			{
				char *stg = va_arg(args, char *);

				count += handle_string(stg);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar('%');
				count++;
				if (*format)
				{
					_putchar(*format);
					count++;
				}
			}
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	return (count);
}
