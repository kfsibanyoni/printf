#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

struct cast
{
	char *symbol;
	int (*f)(va_list);
}; typedef struct cast cast_t;

int _printf(const char *format, ...);
int _putchar(char c);
int check(const char *format, cast_t funcs[], va_list ap);
int print_char(va_list);
int print_str(va_list ap);
int print_percent(va_list);

#endif
