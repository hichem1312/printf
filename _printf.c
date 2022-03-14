#include "main.h"

/**
 *pr_char - pr
 *@l: lx
 *Return: char
 */
int pr_char(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}
/**
 *pr_string - prs
 *@l: lx
 *Return: string
 */
int pr_string(va_list l)
{
	int i;
	char *ch;
	ch = va_arg(l, char *);
	if (ch == NULL)
		return(0);
	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	return (i);
}
/**
 *pr_prs - prc
 *@l : la
 *Return: char
 */
int pr_prs(va_list l)
{
	(void)l;
	return (write(1, "%", 1));
}
/**
 * _printf - pr
 * @format: input
 * */
int _printf(const char *format, ...)
{
	fs tab[] = {
	{'c', pr_char}, {'s', pr_string}
	{'d', print_number}, {'i', print_number}
	{'%', pr_prs}};
	int i, j;
	va_list l;
	va_start(l, format);
	i = 0;
	j = 0;
}
