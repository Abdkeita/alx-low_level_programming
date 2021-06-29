#include "holberton.h"
/**
 * swap_int - takes two pointer to a parameter and updates its value.
 * @a: first input integer.
 * @b: second input integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
