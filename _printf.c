#include "main.h"
#include <stdint.h>

int _printf(const char *format, ...)
{
	int pc;
	cast_t funcs[] = 
	{
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
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
