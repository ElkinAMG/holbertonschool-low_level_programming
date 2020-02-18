#include "holberton.h"
/**
 * _atoi - converts from string to integer.
 * @s: pointer string.
 * Return: the number that was converted.
 */
int _atoi(char *s)
{
  int res, i, sign;
  sign = 1;
  res = 0;

  for (i = 0; s[i] != '\0'; ++i)
    {
      if ((s[i + 1] >= '0' && s[i + 1] <= '9') && s[i] == '-')
	{
	sign = -1;
	i++;
	}
      if (s[i] >= '0' && s[i] <= '9')
	{ 
      res = (res * 10 + s[i] - '0');
      if (s[i + 1] == ' ')
	break;
	}
    }
  
  return res * sign;
}
