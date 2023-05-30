#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

struct cast
{
	char *symbol;
	int (*f)(va_list);
}; typedef struct cast cast_t;

int _printf(const char *format, ...);
int _putchar(char c);
int check(const char *format, cast_t funcs[], va_list ap);
int print_char(va_list);

/* print string */
int print_str(va_list ap);
int _strlen(char *s);
int print_rev(va_list ap);

int print_percent(va_list);

int print_nums(va_list ap);
int print_ints(va_list ap);
int print_unsigned(unsigned int n);

#endif
