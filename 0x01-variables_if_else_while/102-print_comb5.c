#include < stdio.h>

/**
 * main - create two pairs of numbers that do not repeat
 * Return: 0
 */
int main(void)
{
int j, i;

for (j = 0; j <= 99; j++)
{
for (i = 0; i <= 99; i++)
	{
	if (i != j)
	{
	putchar(j / 10 + 48);
	putchar(j % 10 + 48);
	putchar(' ');
	putchar(i / 10 + 48);
	putchar(i % 10 + 48);
	if (j * 100 + i != 9899)
		{
		putchar(',');
		putchar(' ');
		}
	}
	}
}
putchar('\n');
return (0);
}
