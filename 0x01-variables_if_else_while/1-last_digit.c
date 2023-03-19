#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry pint of the program
 *
 * Description: Assigns a random value to the variable n and prints a result
 * based on the last digit of n
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is", n);
if (n % 5 <= 4 && n % 5 > 0)
{
printf(" %d and is greater than 5 \n", ((n % 5) + 5 ));
}
else if (n % 10 == 0)
{
printf(" %d and is 0 \n", 0);
}
else if (n % 6 <= 5 && n % 10 > 0)
{
printf(" %d and is less than 6 and not 0", ((n % 6) + 6));
}
return (0);
}
