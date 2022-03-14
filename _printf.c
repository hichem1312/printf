#include "main.h"

/**
 *pr_char - pr
 *@l: lx
 *Return: char
 */
int pr_char(char c)
{
	putchar(c);
	return (1);
}
/**
 *pr_string - prs
 *@l: lx
 *Return: string
 */
int pr_string(char *ch)
{
	int i;
	if (ch == NULL)
		return(0);
	for (i = 0; ch[i] != '\0'; i++)
		putchar(ch[i]);
	return (i);
}
/**
 * _printf - pr
 * @format: input
 * */
int _printf(const char *format, ...)
{
	int i, j, length = 0;
	char c;
	char *ch;
	va_list l;
	i = 0;
	if (format == NULL)
		return(-1);
	va_start(l, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			length += 1;
		}
		else
		{
			if (format[i] == 'd')
			{
				j = va_arg(l, int);
				length += print_number(j);
			}
			if (format[i] == 'c')
			{
				c = va_arg(l, int);
				length += pr_char(c);
			}
			if (format[i] == 's')
			{
				ch = va_arg(l, char*);
				length += pr_string(ch);
			}
			if (format[i] == '%')
			{
				putchar('%');
				length += 1;
			}
			i++;
		}
		i++;
	}
	putchar ('\n');
	return (length);
}
