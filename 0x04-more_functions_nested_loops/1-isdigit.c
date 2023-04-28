#include "main.h"

/**
 *_isdigit - checks if input is digit between 0-9
 *@c: is input
 *Return: 1 if is digit, return 0 if not
 */

int _isdigit(int c)
{
if (c <= '9' && c >= '0')
{
return (1);
}
else
{
return (0);
}
}
