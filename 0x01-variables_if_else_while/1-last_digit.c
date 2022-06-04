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

if (digit > 5)
printf("last digit of %i is %i and is greater than 5\n", n, digit);
else if (digit == 0)
printf("last digit of %i is %i and is 0\n", n, digit);
else if (digit < 6 && digit != 0)
printf("last digit of %i is %i and is less than 6 and not 0\n" n, digit);

return (0);
}
