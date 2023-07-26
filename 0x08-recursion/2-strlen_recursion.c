#include "main.h"

/**
 * _strlen_recursion - function to get the string's length
 * @str: pointer to string
 * Return: int
 */

int _strlen_recursion(char *str)
{
int ptr = 0;
if (*str > '\0')
{
ptr += _strlen_recursion(str + 1) + 1;
}
return (ptr);
}
