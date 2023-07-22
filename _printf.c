#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
				count += handle_string(va_arg(args, char *));
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar(*format);
				count++;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
