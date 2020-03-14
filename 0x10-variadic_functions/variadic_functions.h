#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/* Typedefs */

typedef const unsigned int n;
typedef const char * const format;
/**
 * struct functions - Structre that contains print functions.
 * @dType: Type of Data Entered.
 * @func: Pointer to Print Functions.
 *
 * Description: This structure contains the data type whit its
 *              respective function.
 */
typedef struct functions
{
	char dType;
	void (*func)();
} callF;

/* End */

int _putchar(char c);

int sum_them_all(n, ...);
void print_numbers(const char *separator, n, ...);
void print_strings(const char *separator, n, ...);
void print_all(format, ...);

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

#endif /* _VARIADIC_FUNCTIONS_ */
