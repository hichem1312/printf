#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int pr_char(char c);
int pr_string(char *ch);
int print_number(int n);
int _putchar(char c);

#endif
