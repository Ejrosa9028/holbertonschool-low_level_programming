#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int found_num = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			found_num = 1;
			num = num * 10 + (*s - '0');
		}
		else if (found_num)
		{
			break;
		}
		s++;
	}

	return (sign * num);
}
