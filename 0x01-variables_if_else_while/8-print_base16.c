#include <stdio.h>
/**
 * main - This is the main function
 * Description: Prints out the alphabet in lowercase followed by a new line
 * Return: The function returns 0
 */
int main() {
int num = '0';
char c;

while (num <= '9')
{
putchar(num);
num++;
if(num > '9')
for( c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return 0;
}
