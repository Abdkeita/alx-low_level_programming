#include <stdio.h>
/**
 * main - This is the main function
 * Description: Prints out the alphabet in lowercase followed by a new line
 * Return: The function returns 0
 */
int main(void)
{
char m;

for (m = '0' ; m <= '9' ; m++)
{
putchar(m);
}
for (m = 'a' ; m <= 'f' ; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
