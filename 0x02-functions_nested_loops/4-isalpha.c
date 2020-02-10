#include "holberton.h"
int _isalpha(int c)
{
	int u;
	int l;

	for (u = 'a'; u <= 'z'; u++)
		for (l = 'A'; l <= 'Z'; l++)
			if (c == u || c == l)
				return (1);

	return (0);
}
