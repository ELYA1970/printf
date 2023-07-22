#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct _print - struct for printer functions
 * @type_args: identifier
 * @p: pointer to a printer functions
 *
 * Description: struct that stores pointers to a pointer function
 */
typedef struct print
{
	char *type_args;
	int (*p)(va_list, char *, unsigned int);
} prints_t;

int _printf(const char *format, ...);

#endif
