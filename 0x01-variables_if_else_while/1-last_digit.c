#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and not less than 6.
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

  /*MY CODE*/
digit = n % 10; /*gets last digit*/
printf("last digit of %i is %i and is ", n, digit);
if (digit > 5)
printf("greater than 5\n");
else if (digit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");

return (0);
}
