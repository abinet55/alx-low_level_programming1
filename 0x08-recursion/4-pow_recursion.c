#include "main.h"
/**
* _pow_recursion - calculate the power of integer
* @x: input 1
* @y: input 2
* Return: integer
*/

int _pow_recursion(int x, int y)
{
int power;
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
power = x * _pow_recursion(x, y - 1);
return (power);
}
