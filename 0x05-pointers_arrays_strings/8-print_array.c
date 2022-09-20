#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
_putchar(10);
}
