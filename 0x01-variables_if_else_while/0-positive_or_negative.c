#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point of the program
*
* Description: Assigns a random number to the variable n and prints 
* whether it is positive or negative
*
* Returns: Always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/**
*  If n > 0 print n is positive
*  Else if n = 0 print n is zero
*  Else print n is negative
*/
if ((n) > 0)
{
printf("%d is positive\n", n);
}
else if ((n) == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
