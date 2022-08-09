#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct a - this structure is going to give us the format
 * @c: the character that is going to give us the respective function
 * @p: function pointer with va_list argument
 */
typedef struct a
{
	    char c;
	    int (*p)(va_list list, char *s, int *index);
} choose;
int _printf(const char *format, ...);

#endif
