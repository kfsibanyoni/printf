#include "main.h"
#include <stdint.h>

/**
  *_printf - produces output according to a format
  *
  * @format: is a character string
  *
  *Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
	int pc;
	cast_t funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_ints},
		{"i", print_ints},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL}
	};

	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	/* call check function */
	pc = check(format, funcs, ap);
	va_end(ap);

	return (pc);
}
