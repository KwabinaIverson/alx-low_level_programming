#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: A pointer to a 2D array representing the chessboard.
 *
 * Description: This function prints the contents of a 2D array representing a chessboard.
 * Each cell in the chessboard is assumed to contain a single character representing a chess piece.
 * The chessboard is assumed to be of size 8x8, as represented by the parameter type `char (*a)[8]`.
 *
 * Return: None.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
