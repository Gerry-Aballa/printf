#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */

typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;

#endif
