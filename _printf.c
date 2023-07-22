#include "main.h"
/**
 * _printf - produces output according to a format specifier
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char *stg = va_arg(args, char *);
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
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
				while (*stg)
				{
					count += _putchar(*stg);
					stg++;
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
		}
		else
			count += _putchar(*format);
		format++;
	}
	return (count);
}
