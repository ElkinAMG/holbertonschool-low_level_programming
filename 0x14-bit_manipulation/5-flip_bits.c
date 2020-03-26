#include "holberton.h"

/**
 * flip_bits - Number of bits to flip for change a number.
 * @n: Number root.
 * @m: Number to change to.
 *
 * Return: Numbers to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	/*-----------------------------------*/
	/* n    → 1024 = 0000 0010 0000 0000 */
	/* m    → 1    = 0000 0000 0000 0001 */
	/*               ------------------- */
	/* swap →  ^   = 0000 0010 0000 0001 */
	/* flips →  &  = 0000 0000 0000 0001 */
	/*               ------------------- */
	/*                   FLIPS →  2      */
	/*-----------------------------------*/

	int swap = n ^ m;
	unsigned int flips = 0;

	for (; swap; flips += (swap & 1), swap >>= 1)
		;

	return (flips);
}
