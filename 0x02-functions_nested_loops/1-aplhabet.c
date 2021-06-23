#include "holberton.h"
/**
 * print_alphabet - print alphabet from a-z in lowercase
 *Return: 0
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_printchar('\n');
}
