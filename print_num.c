#include "main.h"
#include <string.h>
/**
 * print_number - writes the character c to stdout
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_number(int n)
{int x, k, r = 1, s = 0;

	if (n == 0)
	{
		putchar(48);
		s += 1;
		return;
	}
	x = n;
	if (x == -2147483648)
	{
		x = x + 1;
	}
	if (n < 0)
	{
		x = -x;
		putchar('-');
		s += 1;
	}
	while (r < 1000000000 && (x - (r * 10) >= 0))
	{
		r = r * 10;
	}
	while (x > 0)
	{
		k = x / r;
		x = x % r;
		r /= 10;
		if (x < r)
		{
			putchar(k + 48);
			 s += 1;
			putchar(48);
			 s += 1;
			r /= 10;
		}
		else if (n == -2147483648 && k == 7 && r == 0)
		{
			putchar(k + 49);
			 s += 1;
		}
		else
		{
			putchar(k + 48);
			 s += 1;
		}
	}
	return (s);
}
