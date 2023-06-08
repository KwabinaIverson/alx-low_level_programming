#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The square root of n, or -1 if n does not have a natural squr root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1, n));
}

/**
 * find_sqrt - Helper function to find the square root using binary search.
 * @n: The number to find the square root of.
 * @start: The starting point of the search.
 * @end: The ending point of the search.
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int start, int end)
{
	int mid = (start + end);

	if (mid * mid == n)
		return (mid);
	if (start > end)
		return (-1);
	if (mid * mid > n)
		return (find_sqrt(n, start, mid - 1));
	else
		return (find_sqrt(n, mid + 1, end));
}
