#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stdlib.h>

int _putchar(char c);

/*TYPEDEFINITIONS*/
typedef void (*f)(char *);
/*END*/

void print_name(char *name, f f);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUNCTION_POINTERS_ */
