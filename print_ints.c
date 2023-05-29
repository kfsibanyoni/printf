#include "main.h"

/**
  *print_ints - prints integers
  *
  *@ap: agrument
  *
  *Return: number of characters printed
  */
int print_ints(va_list ap)
{
	int n;

	n = print_nums(ap);
	return (n);
}
