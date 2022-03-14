#include "main.h"
#include <string.h>
/**
 * print_number - writes the character c to stdout
 * @n:integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{int x, k, r = 1;

	if (n == 0)
	{
		_putchar(48);
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
		_putchar('-');
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
			_putchar(k + 48);
			_putchar(48);
			r /= 10;
		}
		else if (n == -2147483648 && k == 7 && r == 0)
		{
			_putchar(k + 49);
		}
		else
		{
			_putchar(k + 48);
		}
	}
}
