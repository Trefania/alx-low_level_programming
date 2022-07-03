#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  *main - prints to the screen using puts function
 *
 *  *Return: If successful the exit status is zero
 *
 */

int main(void)
{
int i, j;

for (i = 48; i <= 57; i++)
{
for (j = i + 1; j <= 57; j++)
{
putchar(j);
putchar(i);
if ((j == 57) && (i == 56))
break;
putchar(44);
putchar(32);
}
}
putchar('\n');

return (0);
}
