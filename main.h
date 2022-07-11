#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);

/**
  * struct code_format - Struct format
  * @sc: The specifiers
  * @f: The function associated
  */

typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif
