#include "main.h"

/**
 * lastIndex - gets last index of string
 * @s: pointer to string
 * @Return: int
 */
int is_palindrome(char *s);
int check(char *s, int begin, int end, int mod);
int lastIndex(char *s)
{
int t = 0;
if (*s > '\0')
{
t += lastIndex(s + 1) + 1;
}
return (t);
}

/**
 * is_palindrome - if string palindrome
 * @s: string
 * Return: true or false
 */
int is_palindrome(char *s)
{
int end = lastIndex(s);
return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker function
 * @s: string
 * @begin: int right to left
 * @end: int left to right
 * @mod: int
 * Return: 0 or 1
 */

int check(char *s, int begin, int end, int mod)
{
if ((begin == end && mod != 0) || (begin == end + 1 && mod == 0))
{
return (1);
}
else if (s[begin] != s[end])
{
return (0);
}
else
{
return (check(s, begin + 1, end - 1, mod));
}
}
