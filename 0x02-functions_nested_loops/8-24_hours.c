#include "main.h"

/**
 * jack_bauer - void type and takes no argument
 *
 * Description: Prints the every minute of Jac Bauer
 *
 * Return: It's void
 */
void jack_bauer(void) {
int hour = 0;
int minute = 0;
while (hour < 24)
{
_putchar('0' + hour / 10);
_putchar('0' + hour % 10);
_putchar(':');
_putchar('0' + minute / 10);
_putchar('0' + minute % 10);
_putchar('\n');
minute++;
if (minute == 60)
{
minute = 0;
hour++;
}
}
}
