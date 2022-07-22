The4 Theopen4, [20/07/2022 23:47]
#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
<<<<<<< HEAD
if ((root * root) == num)
    return (root);

if (root == num / 2)
    return (-1);
=======
 if ((root * root) == num)
  return (root);

 if (root == num / 2)
  return (-1);
>>>>>>> 1317bebb3bba126e67daacb7ac5b0e733951cffe

 return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the sqaure root of.
 *
 * Return: If n has a natural square root - The natural square root of n.
 * If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
<<<<<<< HEAD
int root = 0;

if (n < 0)
    return (-1);
if (n == 1)
    return (1);
=======
 int root = 0;

 if (n < 0)
  return (-1);
 if (n == 1)
  return (1);
>>>>>>> 1317bebb3bba126e67daacb7ac5b0e733951cffe

 return (find_sqrt(n, root));
}
