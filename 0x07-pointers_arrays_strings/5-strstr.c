#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
char *u;
u = strstr (haystack, needle);
return (u);
}
