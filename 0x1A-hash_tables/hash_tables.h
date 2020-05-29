#ifndef HT_HOLBERTON
#define HT_HOLBERTON

#include "h_structures.h"
#include <stdio.h>
#include <stdlib.h>

/* PROTOTYPES */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif /* HT_HOLBERTON */
