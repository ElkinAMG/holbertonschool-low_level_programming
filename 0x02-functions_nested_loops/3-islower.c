#include "holberton.h"
int _islower(int c)
{
	int b;
	for(b = 'a'; b <= 'z'; b++)
		if(c == b)
			return (1);

	return (0);
}
