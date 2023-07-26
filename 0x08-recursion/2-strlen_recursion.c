#include "main.h"

/**
 * _strlen_recursion - function to get the string's length
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int ptr = 0;
if (*s > '\0')
{
ptr += _strlen_recursion(s + 1) + 1;
}
return (ptr);
}
