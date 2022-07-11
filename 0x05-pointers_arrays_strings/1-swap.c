#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: is the parameter int
 * @b: is the parameter int
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
